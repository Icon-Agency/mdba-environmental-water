'use strict';

// Include gulp.
const gulp = require('gulp');

// Include plug-ins.
const autoprefixer = require('autoprefixer');
const atImport = require('postcss-import');
const beeper = require('beeper');
const cssNano = require('cssnano');
const compass = require('gulp-sass');
const jshint = require('gulp-jshint');
const plumber = require('gulp-plumber');
const postcss = require('gulp-postcss');
const uglify = require('gulp-uglify');

// *************************

// Error Handling to stop file watching from dying on an error (ie: Sass
// compiling).
var onError = function (err) {
  beeper();
  console.log(err);
};

// *************************

// JS minify.
gulp.task('scripts', function () {
  gulp.src('./src/js/*.js')
      .pipe(plumber({
        errorHandler: onError
      }))
      .pipe(uglify())
      .pipe(gulp.dest('./js/'));
});

// Compile the Sass.
gulp.task('styles', function () {
  // Register the PostCSS plugins.
  var postcssPlugins = [
    atImport,
    autoprefixer,
    cssNano,
  ];
  // The actual task.
  gulp.src('./src/sass/*.scss')
  // Error handling
      .pipe(plumber({
        errorHandler: onError
      }))
      // Compile the Sass code.
      .pipe(compass({
        sass: './src/sass'
      }))
      // If there's more than one css file outputted, merge them into one.
      // .pipe(concat('./styles.css'))
      // Optimise the CSS.
      .pipe(postcss(postcssPlugins))
      // Output to the css folder.
      .pipe(gulp.dest('./css/'));
});

// Watch changes.
gulp.task('watch', function() {
  // Watch for Sass changes.
  gulp.watch(['./src/sass/*.scss'], ['styles']);
  // Watch for JS changes.
  gulp.watch(['./src/js/*.js'], ['scripts']);
});

// *************************

// Default gulp task.
gulp.task('default', ['scripts', 'styles']);
