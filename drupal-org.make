; Drupal.org release file.
core = 7.x
api = 2

; Basic contributed modules.

projects[ctools][version] = 1.4
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[context][version] = 3.2
projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[features][version] = 2.0
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[wysiwyg][version] = 2.2
projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"

projects[views][version] = 3.7
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[webform][version] = 3.20
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"

projects[chosen][version] = 2.0-beta4
projects[chosen][type] = "module"
projects[chosen][subdir] = "contrib"

projects[module_filter][version] = 2.0-alpha2
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[entity][version] = 1.5
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[Jquery_update][version] = 2.4
projects[Jquery_update][type] = "module"
projects[Jquery_update][subdir] = "contrib"

projects[libraries][version] = 3.x-dev
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[media][version] = 1.4
projects[media][type] = "module"
projects[media][subdir] = "contrib"

projects[book_helper][version] = 1.0-beta2
projects[book_helper][type] = "module"
projects[book_helper][subdir] = "contrib"

projects[delta][version] = 3.0-beta11
projects[delta][type] = "module"
projects[delta][subdir] = "contrib"

projects[omega_tools][version] = 3.0-rc4
projects[omega_tools][type] = "module"
projects[omega_tools][subdir] = "contrib"

projects[nivo_slider][version] = 1.11
projects[nivo_slider][type] = "module"
projects[nivo_slider][subdir] = "contrib"

projects[ckeditor][version] = 1.14
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

; Base theme.
projects[omega][version] = 3.1
projects[omega][type] = "theme"
projects[omega][subdir] = "themes"

;Main theme
;coming up

; Libraries
libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/archive/v1.1.0.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][destination] = "libraries"

libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.0/ckeditor_4.4.0_standard.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[nivo-slider][download][type] = "file"
libraries[nivo-slider][download][url] = "http://cloud.github.com/downloads/gilbitron/Nivo-Slider/nivo-slider3.1.zip"
libraries[nivo-slider][directory_name] = "nivo-slider"
libraries[nivo-slider][destination] = "libraries"