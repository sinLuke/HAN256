# HAN256
A binary encoding schema that encodes binary data (such as URL or private key)

## What problem does it solve?

When we exchange a piece of data, it is encoded in base64 to form a printable text and then stored and transmitted. The content could be more meaningful and easier to remember if we invent an encoding schema between binary data and Chinese characters. Chinese characters have a high information density, and more than a billion people can recognize and easily remember them. Encoding binary data into Chinese characters by HAN256 will make it easy to record or compare this data manually.

## HAN256 conversion table

HAN256 established a basic character set (composed of 256 most commonly used Chinese characters). The converter will map every 8 bits of data into one of those 256 characters:

### Section 0
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|0|0000 0000|00|的|
|1|0000 0001|01|一|
|2|0000 0010|02|是|
|3|0000 0011|03|不|
|4|0000 0100|04|了|
|5|0000 0101|05|人|
|6|0000 0110|06|我|
|7|0000 0111|07|在|
|8|0000 1000|08|有|
|9|0000 1001|09|他|
|10|0000 1010|0A|这|
|11|0000 1011|0B|中|
|12|0000 1100|0C|大|
|13|0000 1101|0D|来|
|14|0000 1110|0E|上|
|15|0000 1111|0F|国|

### Section 1
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|16|0001 0000|10|个|
|17|0001 0001|11|到|
|18|0001 0010|12|说|
|19|0001 0011|13|们|
|20|0001 0100|14|为|
|21|0001 0101|15|子|
|22|0001 0110|16|和|
|23|0001 0111|17|你|
|24|0001 1000|18|地|
|25|0001 1001|19|出|
|26|0001 1010|1A|道|
|27|0001 1011|1B|也|
|28|0001 1100|1C|时|
|29|0001 1101|1D|年|
|30|0001 1110|1E|得|
|31|0001 1111|1F|就|

### Section 2
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|32|0010 0000|20|那|
|33|0010 0001|21|要|
|34|0010 0010|22|下|
|35|0010 0011|23|以|
|36|0010 0100|24|生|
|37|0010 0101|25|会|
|38|0010 0110|26|自|
|39|0010 0111|27|着|
|40|0010 1000|28|去|
|41|0010 1001|29|之|
|42|0010 1010|2A|过|
|43|0010 1011|2B|中|
|44|0010 1100|2C|家|
|45|0010 1101|2D|学|
|46|0010 1110|2E|对|
|47|0010 1111|2F|可|

### Section 3
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|48|0011 0000|30|她|
|49|0011 0001|31|里|
|50|0011 0010|32|后|
|51|0011 0011|33|小|
|52|0011 0100|34|么|
|53|0011 0101|35|心|
|54|0011 0110|36|多|
|55|0011 0111|37|天|
|56|0011 1000|38|而|
|57|0011 1001|39|能|
|58|0011 1010|3A|好|
|59|0011 1011|3B|都|
|60|0011 1100|3C|然|
|61|0011 1101|3D|没|
|62|0011 1110|3E|日|
|63|0011 1111|3F|于|

### Section 4
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|64|0100 0000|40|起|
|65|0100 0001|41|还|
|66|0100 0010|42|发|
|67|0100 0011|43|成|
|68|0100 0100|44|事|
|69|0100 0101|45|只|
|70|0100 0110|46|作|
|71|0100 0111|47|当|
|72|0100 1000|48|想|
|73|0100 1001|49|看|
|74|0100 1010|4A|文|
|75|0100 1011|4B|无|
|76|0100 1100|4C|开|
|77|0100 1101|4D|手|
|78|0100 1110|4E|十|
|79|0100 1111|4F|用|

### Section 5
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|80|0101 0000|50|主|
|81|0101 0001|51|行|
|82|0101 0010|52|方|
|83|0101 0011|53|又|
|84|0101 0100|54|如|
|85|0101 0101|55|前|
|86|0101 0110|56|所|
|87|0101 0111|57|本|
|88|0101 1000|58|见|
|89|0101 1001|59|经|
|90|0101 1010|5A|头|
|91|0101 1011|5B|面|
|92|0101 1100|5C|公|
|93|0101 1101|5D|同|
|94|0101 1110|5E|三|
|95|0101 1111|5F|已|

### Section 6
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|96|0110 0000|60|老|
|97|0110 0001|61|从|
|98|0110 0010|62|动|
|99|0110 0011|63|两|
|100|0110 0100|64|长|
|101|0110 0101|65|知|
|102|0110 0110|66|民|
|103|0110 0111|67|样|
|104|0110 1000|68|现|
|105|0110 1001|69|分|
|106|0110 1010|6A|将|
|107|0110 1011|6B|外|
|108|0110 1100|6C|但|
|109|0110 1101|6D|身|
|110|0110 1110|6E|些|
|111|0110 1111|6F|与|

### Section 7
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|112|0111 0000|70|高|
|113|0111 0001|71|意|
|114|0111 0010|72|进|
|115|0111 0011|73|把|
|116|0111 0100|74|法|
|117|0111 0101|75|此|
|118|0111 0110|76|实|
|119|0111 0111|77|回|
|120|0111 1000|78|二|
|121|0111 1001|79|理|
|122|0111 1010|7A|美|
|123|0111 1011|7B|点|
|124|0111 1100|7C|月|
|125|0111 1101|7D|明|
|126|0111 1110|7E|其|
|127|0111 1111|7F|种|

### Section 8
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|128|1000 0000|80|声|
|129|1000 0001|81|全|
|130|1000 0010|82|工|
|131|1000 0011|83|己|
|132|1000 0100|84|话|
|133|1000 0101|85|儿|
|134|1000 0110|86|者|
|135|1000 0111|87|向|
|136|1000 1000|88|情|
|137|1000 1001|89|部|
|138|1000 1010|8A|正|
|139|1000 1011|8B|名|
|140|1000 1100|8C|定|
|141|1000 1101|8D|女|
|142|1000 1110|8E|问|
|143|1000 1111|8F|力|

### Section 9
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|144|1001 0000|90|机|
|145|1001 0001|91|给|
|146|1001 0010|92|等|
|147|1001 0011|93|几|
|148|1001 0100|94|很|
|149|1001 0101|95|业|
|150|1001 0110|96|最|
|151|1001 0111|97|间|
|152|1001 1000|98|新|
|153|1001 1001|99|什|
|154|1001 1010|9A|打|
|155|1001 1011|9B|便|
|156|1001 1100|9C|位|
|157|1001 1101|9D|因|
|158|1001 1110|9E|重|
|159|1001 1111|9F|被|

### Section A
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|160|1010 0000|A0|走|
|161|1010 0001|A1|电|
|162|1010 0010|A2|四|
|163|1010 0011|A3|第|
|164|1010 0100|A4|门|
|165|1010 0101|A5|相|
|166|1010 0110|A6|次|
|167|1010 0111|A7|东|
|168|1010 1000|A8|政|
|169|1010 1001|A9|海|
|170|1010 1010|AA|口|
|171|1010 1011|AB|使|
|172|1010 1100|AC|教|
|173|1010 1101|AD|西|
|174|1010 1110|AE|再|
|175|1010 1111|AF|平|

### Section B
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|176|1011 0000|B0|真|
|177|1011 0001|B1|听|
|178|1011 0010|B2|世|
|179|1011 0011|B3|气|
|180|1011 0100|B4|信|
|181|1011 0101|B5|北|
|182|1011 0110|B6|少|
|183|1011 0111|B7|关|
|184|1011 1000|B8|并|
|185|1011 1001|B9|内|
|186|1011 1010|BA|加|
|187|1011 1011|BB|化|
|188|1011 1100|BC|由|
|189|1011 1101|BD|却|
|190|1011 1110|BE|代|
|191|1011 1111|BF|军|

### Section C
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|192|1100 0000|C0|产|
|193|1100 0001|C1|入|
|194|1100 0010|C2|先|
|195|1100 0011|C3|山|
|196|1100 0100|C4|五|
|197|1100 0101|C5|太|
|198|1100 0110|C6|水|
|199|1100 0111|C7|万|
|200|1100 1000|C8|市|
|201|1100 1001|C9|眼|
|202|1100 1010|CA|体|
|203|1100 1011|CB|别|
|204|1100 1100|CC|处|
|205|1100 1101|CD|总|
|206|1100 1110|CE|才|
|207|1100 1111|CF|场|

### Section D
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|208|1101 0000|D0|师|
|209|1101 0001|D1|书|
|210|1101 0010|D2|比|
|211|1101 0011|D3|住|
|212|1101 0100|D4|员|
|213|1101 0101|D5|九|
|214|1101 0110|D6|笑|
|215|1101 0111|D7|性|
|216|1101 1000|D8|通|
|217|1101 1001|D9|目|
|218|1101 1010|DA|华|
|219|1101 1011|DB|报|
|220|1101 1100|DC|立|
|221|1101 1101|DD|马|
|222|1101 1110|DE|命|
|223|1101 1111|DF|张|

### Section E
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|224|1110 0000|E0|活|
|225|1110 0001|E1|难|
|226|1110 0010|E2|神|
|227|1110 0011|E3|数|
|228|1110 0100|E4|件|
|229|1110 0101|E5|安|
|230|1110 0110|E6|表|
|231|1110 0111|E7|原|
|232|1110 1000|E8|车|
|233|1110 1001|E9|白|
|234|1110 1010|EA|应|
|235|1110 1011|EB|路|
|236|1110 1100|EC|期|
|237|1110 1101|ED|叫|
|238|1110 1110|EE|死|
|239|1110 1111|EF|常|

### Section F
|Decimal|Binary|Hexadecimal|Chinese Character|
|---|---|---|---|
|240|1111 0000|F0|提|
|241|1111 0001|F1|感|
|242|1111 0010|F2|金|
|243|1111 0011|F3|何|
|244|1111 0100|F4|更|
|245|1111 0101|F5|反|
|246|1111 0110|F6|合|
|247|1111 0111|F7|放|
|248|1111 1000|F8|做|
|249|1111 1001|F9|系|
|250|1111 1010|FA|计|
|251|1111 1011|FB|或|
|252|1111 1100|FC|司|
|253|1111 1101|FD|利|
|254|1111 1110|FE|受|
|255|1111 1111|FF|光|
