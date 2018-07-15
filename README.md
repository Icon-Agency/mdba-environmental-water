# The nitty-gritty

This module provides features needed to implement the "Water for the Environment" page templates


## For developer
### Installation of dependencies
In module directory, run
``` 
yarn install
```
### Compile source files (development environment)
In module directory, run
``` 
yarn run dev
```
### Compile source files (production environment)
In module directory, run
``` 
yarn run prod
```
## For site administrator

### Installation and configuration

1. Enable the following modules from the Administration area modules page (admin/modules)
* Water for the Environment (water_for_the_environment)
* Water for the Environment features (water_for_the_environment_features)

2. Goto: admin/structure/pages/edit/node_view
Click Variants > Landing page >Selection rules > Node:type and tick "Environmental Water Pages"

3. Goto: admin/structure/types/manage/ew-pages and make sure next to *Menu settings* the menu *nvironmental Water* is checked
4. Add new *Environmental Water pages* by going to node/add/ew-pages or click the button on the content admin page

# More nerdy details
## Dependancies
Features

## Paragraph bundles configuration
### Environmental Water Optional Component (ew_optional_component)

Fileds:
* Title (field_ew_pb_title, field--field-ew-pb-title.tpl.php)
* Text (field_ew_pb_text)
* Icon image (field_ew_pb_icon_image, directory=environmental_water/images)
* Additional images (ew_pb_additional_images, directory=environmental_water/images)
* Attachments (field_ew_pb_attachments)
* More link (field_ew_pb_more_link)

### Environmental Water Media Embed (ew_media_embed)
* Embedded media (field_ew_pb_embedded_media)
* Title (field_ew_pb_title, field--field-ew-pb-title.tpl.php)
* Text (field_ew_pb_text)
* More link (field_ew_pb_more_link)

### Environmental Water Text and Image (ew_text_image)
* Feature image (ew_pb_additional_images, directory=environmental_water/images)
* Title (field_ew_pb_title, field--field-ew-pb-title.tpl.php)
* Text (field_ew_pb_text)
* More link (field_ew_pb_more_link)

## Content type
Custom fields:
* Banner image (field_ew_banner_image)
* Optional components	(field_ew_optional_components, using Paragraph ew_optional_component)
