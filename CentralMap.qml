import QtQuick 2.14
import QtPositioning 5.12
import QtLocation 5.15

Item {
    id:window

    Map {

        anchors.fill: parent
        activeMapType: Map.supportedMapTypes[1]
        center: QtPositioning.coordinate(20.5937, 78.9629)
        zoomLevel: 5
        plugin: Plugin {
           name: "osm";
           PluginParameter {
               name: 'osm.mapping.offline.directory'
               value: ':/offline_tiles/'
           }
        }

    MapPolyline {
            id: pl1
           path: routeProvider.path[0]
           line.width: 5

        }
    MapPolyline {
            id: pl2
           path: routeProvider.path[1]
           line.width: 5

        }
    MapPolyline {
            id: pl3
           path: routeProvider.path[2]
           line.width: 5

        }
    MapPolyline {
            id: pl4
           path: routeProvider.path[3]
           line.width: 5

        }
    MapPolyline {
            id: pl5
           path: routeProvider.path[4]
           line.width: 5

        }

    }
    function addMarker(lat, lng) {
        var item = comMarker.createObject(window, {
          coordinate: QtPositioning.coordinate(lat, lng)
        })
        map.addMapItem(item)
    }
    Component {
            id: mapMarker
            MapQuickItem {
                id: markerImg
                anchorPoint.x: image.width/4
                anchorPoint.y: image.height
                coordinate: position

                sourceItem: Image {
                    id: image
                    source: "http://maps.gstatic.com/mapfiles/ridefinder-images/mm_20_red.png"
                }
            }
        }

    }






