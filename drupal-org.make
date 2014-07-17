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

projects[module_filter][version] = 2.0-alpha2
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"

projects[entity][version] = 1.5
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[jquery_update][version] = 2.4
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

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

projects[ckeditor][version] = 1.14
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

projects[colorbox][version] = 2.7
projects[colorbox][type] = "module"
projects[colorbox][subdir] = "contrib"

projects[colorbox_node][version] = 3.3
projects[colorbox_node][type] = "module"
projects[colorbox_node][subdir] = "contrib"

projects[weight][version] = 2.3
projects[weight][type] = "module"
projects[weight][subdir] = "contrib"

projects[picture][version] = 2.4
projects[picture][type] = "module"
projects[picture][subdir] = "contrib"

projects[tipsy][version] = 1.0-rc1
projects[tipsy][type] = "module"
projects[tipsy][subdir] = "contrib"

projects[field_collection][version] = 1.0-beta7
projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"

projects[file_entity][version] = 2.0-alpha3
projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"

projects[nice_menus][version] = 2.5
projects[nice_menus][type] = "module"
projects[nice_menus][subdir] = "contrib"

projects[pane][version] = 2.5
projects[pane][type] = "module"
projects[pane][subdir] = "contrib"

projects[views_flipped_table][version] = 1.0
projects[views_flipped_table][type] = "module"
projects[views_flipped_table][subdir] = "contrib"

projects[globalredirect][version] = 1.5
projects[globalredirect][type] = "module"
projects[globalredirect][subdir] = "contrib"

projects[transliteration][version] = 3.2
projects[transliteration][type] = "module"
projects[transliteration][subdir] = "contrib"

projects[webform2vtiger][version] = 1.0
projects[webform2vtiger][type] = "module"
projects[webform2vtiger][subdir] = "contrib"

projects[moopapi][version] = 1.2
projects[moopapi][type] = "module"
projects[moopapi][subdir] = "contrib"

projects[botcha][version] = 3.3
projects[botcha][type] = "module"
projects[botcha][subdir] = "contrib"

projects[piwik][version] = 2.5
projects[piwik][type] = "module"
projects[piwik][subdir] = "contrib"

projects[pathauto][version] = 1.2
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[css_browser_selector][version] = 1.1
projects[css_browser_selector][type] = "module"
projects[css_browser_selector][subdir] = "contrib"

projects[publishcontent][version] = 1.3
projects[publishcontent][type] = "module"
projects[publishcontent][subdir] = "contrib"

projects[advanced_help][version] = 1.1
projects[advanced_help][type] = "module"
projects[advanced_help][subdir] = "contrib"

projects[search_config][version] = 1.1
projects[search_config][type] = "module"
projects[search_config][subdir] = "contrib"

projects[xmlsitemap][version] = 2.0
projects[xmlsitemap][type] = "module"
projects[xmlsitemap][subdir] = "contrib"

projects[metatag][version] = 1.0-rc1
projects[metatag][type] = "module"
projects[metatag][subdir] = "contrib"

projects[token][version] = 1.5
projects[token][type] = "module"
projects[token][subdir] = "contrib"

; Base theme.
projects[omega][version] = 3.1
projects[omega][type] = "theme"

;Main theme
projects[devtrac7_theme][type] = "theme"
projects[devtrac7_theme][download][type] = "git"
projects[devtrac7_theme][download][branch] = 7.x-1.x
projects[devtrac7_theme][download][url] = "http://git.drupal.org/project/devtrac7_theme.git"

; Libraries
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.0/ckeditor_4.4.0_standard.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.x.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"
