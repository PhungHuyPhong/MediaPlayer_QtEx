include(/home/phong/Qt/Examples/Qt-6.8.2/demos/mediaplayer/build/Desktop_Qt_6_8_2-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/MediaPlayerApp-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtmultimedia")

qt6_deploy_qml_imports(TARGET MediaPlayerApp PLUGINS_FOUND plugins_found)
qt6_deploy_runtime_dependencies(
    EXECUTABLE /home/phong/Qt/Examples/Qt-6.8.2/demos/mediaplayer/build/Desktop_Qt_6_8_2-Debug/MediaPlayerApp
    ADDITIONAL_MODULES ${plugins_found}
    GENERATE_QT_CONF
)