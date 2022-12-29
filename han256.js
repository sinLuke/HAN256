//
//  han256.js
//
//  Created by Luke on 2022-12-28.
//

const hanzi =
  "的一是不了人我在有他这中大来上国个到说们为子和你地出道也时年得就那要下以生会自着去之过尹家学对可她里后小么心多天而能好都然没日于起还发成事只作当想看文无开手十用主行方又如前所本见经头面公同三宇老从动两长知民样现分将外但身些与高意进把法此实回二理美点月明其种声全工己话儿者向情部正名定女问力机给等几很业最间新什打便位因重被走电四第门相次东政海口使教西再平真听世气信北少关并内加化由却代军产入先山五太水万市眼体别处总才场师书比住员九笑性通目华报立马命张活难神数件安表原车白应路期叫死常提感金何更反合放做系计或司利受光";

function hanzi2binary(han256) {
  return new Uint8Array(
    Array.from(han256).map((input) => {
      var value = 0;
      for (var index in hanzi) {
        char = hanzi[index];
        if (char == input) {
          value = index;
          break;
        }
      }
      return value;
    })
  ).buffer;
}

function binary2hanzi(binary) {
  return Array.from(new Uint8Array(binary).values())
    .map((byte) => hanzi[byte])
    .join("");
}