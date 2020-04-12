import QtQuick 2.0
import QtLocation 5.6
import QtPositioning 5.6
import "map"
Item {
    PositionSource {
        active: true
        onPositionChanged: {
            map.center = console.log(position.coordinate);
        }
    }
}
      Map{
    id: map
    anchors.fill: parent
    plugin: Plugin { name : "osm"}
    center: QtPositioning.coordinate(44.72675, 5.02609) // Saint Louis
    zoomLevel: 5

    MapQuickItem
        coordinate: QtPositioning.coordinate(44.72675, 5.02609) // Saint Louis
    sourceItem: Image {
        id: Image {
            source: "file:reco.png"
        }
        anchorPoint.x:image.width / Z
        anchorPoint.y:image.height
       }
    }
}
