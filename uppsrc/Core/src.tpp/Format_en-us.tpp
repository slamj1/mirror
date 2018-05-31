topic "Format - text formatting";
[i448;a25;kKO9;2 $$1,0#37138531426314131252341829483380:class]
[l288;2 $$2,0#27521748481378242620020725143825:desc]
[0 $$3,0#96390100711032703541132217272105:end]
[H6;0 $$4,0#05600065144404261032431302351956:begin]
[i448;a25;kKO9;2 $$5,0#37138531426314131252341829483370:item]
[l288;a4;*@5;1 $$6,6#70004532496200323422659154056402:requirement]
[l288;i1121;b17;O9;~~~.1408;2 $$7,0#10431211400427159095818037425705:param]
[i448;b42;O9;2 $$8,8#61672508125594000341940100500538:tparam]
[b42;2 $$9,9#13035079074754324216151401829390:normal]
[2 $$0,0#00000000000000000000000000000000:Default]
[{_}%EN-US 
[ {{10000@(113.42.0) [s0; [*@2;4 Format `- text formatting]]}}&]
[s0;*@3;4 &]
[s5;:`:`:Format`(const char`*`,const`:`:Vector`<`:`:Value`>`&`):%- [^`:`:String^ String
]_[* Format][@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][*@3 format][@(64) , 
][@(0.0.255) const][@(64) _][^`:`:Vector^@(64) Vector][@(64) <][^`:`:Value^@(64) Value][@(64) >
`&_][*@3 args][@(64) )]&]
[s5;%- [^`:`:String^ String]_[* Format][@(64) (][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _
`*][*@3 format][@(64) , ][^`:`:Value^@(64) Value][@(64) _][*@3 arg][*,@3 1][*@3  
][@4 `[], [^`:`:Value^@(64) Value][@(64) _][*@3 arg][*,@3 n][@4 `]...] [@(64) )]&]
[s5;:Format`(int`,const char`*`,const Vector`<Value`>`&`):%- [^String^ String]_[* Format](
[@(0.0.255) int]_[*@3 language], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 s], 
[@(0.0.255) const]_Vector[@(0.0.255) <]Value[@(0.0.255) >`&]_[*@3 v])&]
[s5;%- [^`:`:String^ String]_[* Format][@(64) (][@(0.0.255) int][@(64) _][*@3 language][@(64) , 
][@(0.0.255) const][@(64) _][@(0.0.255) char][@(64) _`*][*@3 format][@(64) , 
][^`:`:Value^@(64) Value][@(64) _][*@3 arg][*,@3 1][*@3  ][@4 `[], [^`:`:Value^@(64) Value][@(64) _
][*@3 arg][*,@3 n][@4 `]...] [@(64) )]&]
[s2; &]
[s0; Format forms output text based on [*@3 format], inserting actual 
arguments to placeholders. Argument values are converted to text 
using formatters. U`+`+ specifies set of standard formatters; 
application can freely register their own formatters for specific 
Value types too.&]
[s0; &]
[s0; Note that the variable number of Value arguments is implemented 
by overloading the Format up to 20 parameters.&]
[s0; &]
[s0; Placeholders start with [* %] and have format:&]
[s0; &]
[s0; [* %][*@4 `[][*@(0.0.255) commands][*@4 `]`[][*@(0.0.255) options][*@4 `]`[][*@(0.0.255) forma
tter`-id][*@4 `]`[][*@(0.0.255) ``][*@4 `]]&]
[s0; &]
[s0; [*@(0.0.255) commands] are interpreted by Format routine (not 
specific formatter). Each command sequence ends with character 
specifying the kind of command, this delimits it from options 
and/or formatter.&]
[s0; &]
[s0; Available commands:&]
[s0; &]
[ {{1785:8215^ [s0; [*/@(0.0.255) position][* :]]
::= [s0; Seeks to an argument at [*/@(0.0.255) position]. Allows to `"reorganize`" 
ordering of arguments, useful with translations.]
::^ [s0; [*/@(0.0.255) width][* <]]
::= [s0; Places formatter result into field with [*/@(0.0.255) width] characters, 
aligns left.]
::^ [s0; [*/@(0.0.255) width][* >]]
::= [s0; Places formatter result into field with [*/@(0.0.255) width] characters, 
aligns right.]
::^ [s0; [*/@(0.0.255) width][* `=]]
::= [s0; Places formatter result into field with [*/@(0.0.255) width] characters, 
aligns to center.]
::^ [s0; [* `[][*/@(0.0.255) text][* `]`~]]
::= [s0; If argument is [* Null], uses [*/@(0.0.255) text] instead of formatter 
result.]}}&]
[s0; &]
[s0; [*@(0.0.255) formatter`-id][*  ]must consist of alpha characters 
only, unlike C identifiers, digits or `'`_`' are not allowed. 
Everything between [*@(0.0.255) commands] and [*@(0.0.255) formatter`-id] 
is considered to be [*@(0.0.255) options] and passed to formatter. 
Note that [*@(0.0.255) formatter`-id] is Value type specific `- 
the same name can specify different formatter depending on Value 
type. [*@(0.0.255) formatter`-id] is case`-sensitive.&]
[s0; &]
[s0; Character [* `*] in [*@(0.0.255) options] section is replaced by 
an argument converted using AsString.&]
[s0; &]
[s0; If [*@(0.0.255) options] are to contain alpha characters, they 
need to be escaped using [* `[ `]] to distinguish options from 
formatter`-id.&]
[s0; &]
[s0; Placeholder can end either by non`-alpha character or by [* ``]. 
formatter`-id can be left empty; in that case Format uses AsString 
to convert Value to text (defined in RichValue interface) `- 
the most trivial placeholder is therefore [* %``].&]
[s0; &]
[s0; While Format implements all of classic printf formatter, please 
notice two incompatibilities:&]
[s0; &]
[s0;i150;O0; All arguments of Format must be convertible (and are 
converted) to Value. On the positive side, Value performs natural 
conversions like double `-> int, so it is possible to e.g. use 
%d for double value.&]
[s0; &]
[s0;i150;O0; formatter`-id `"eats`" all alpha characters. This is 
a problem when non`-placeholder alpha character is to follow 
placeholder, e.g. %dpt `- this has to be written as %d``pt (`` 
delimits the formatter`-id).&]
[s0; &]
[s0; &]
[s0; [*/ Standard formatters]&]
[s0; &]
[s0; [* Default formatter]&]
[s0; &]
[s0; If formatter`-id is empty, Value is converted using AsString 
(implemented in RichValue interface).&]
[s0; &]
[s0; &]
[s0; [* printf formatters]&]
[s0; &]
[s0; Most printf formatters are supported:&]
[s0; &]
[s0; [* c d i o x X ld li lo lx lX lld lli llo llx llX e E f g G s]&]
[s0; &]
[s0; Please refer to printf documentation for the description.&]
[s0; &]
[s0; &]
[s0; [* Switch formatter]&]
[s0; &]
[s0; This is special number formatter (registered for double, int 
and int64 values). [*@(0.0.255) options] of switch formatter contain 
a list of values and respective texts `- a text for actual argument 
is printed. [*@(0.0.255) formatter`-id] is [* s].&]
[s0; &]
[s0; The format of switch [*@(0.0.255) options] is&]
[s0; &]
[s0; [*@4 `[][*@(0.0.255) modulo][* %][*@4 `]`[][*@(0.0.255) case][* :][*@(0.0.255) text];[*@4 `]...`[
][*@(0.0.255) default][*@4 `]]&]
[s0; &]
[ {{1395:8605 [s0; [*@(0.0.255) modulo]]
:: [s0; If this optional part is present, modulo of argument is used 
for switch cases.]
:: [s0; [*@(0.0.255) case]]
:: [s0; Numeric case.]
:: [s0; [*@(0.0.255) text]]
:: [s0; Text for given numeric case.]
:: [s0; [*@(0.0.255) default]]
:: [s0; Default text when no case is matched.]}}&]
[s0; &]
[s0; Note that as text usually contains letters, whole switch options 
section is almost always escaped using [* `[] [* `]].&]
[s0; &]
[s0; &]
[s0; [* Simple integer formatters]&]
[s0; &]
[s0; These formatters are registered for double, int and int64 values.&]
[s0; &]
[ {{1426:8574h1;@(204) [s0; [*@(0.0.255) formatter`-id]]
:: [s0; Description]
::@2 [s0;%- [* month]]
:: [s0; Lower`-case month name.]
:: [s0;%- [* Month]]
:: [s0; Month name with first letter upper`-case, rest lower`-case.]
:: [s0;%- [* MONTH]]
:: [s0; Upper`-case month name.]
:: [s0;%- [* mon]]
:: [s0; Abbreviated lower`-case month name.]
:: [s0;%- [* Mon]]
:: [s0; Abbreviated month name, first letter upper`-case, rest lower`-case.]
:: [s0;%- [* MON]]
:: [s0; Abbreviated upper`-case month name.]
:: [s0;%- [* day]]
:: [s0; Lower`-case day name.]
:: [s0;%- [* Day]]
:: [s0; Day name with first letter upper`-case, rest lower`-case.]
:: [s0;%- [* DAY]]
:: [s0; Upper`-case day name.]
:: [s0;%- [* dy]]
:: [s0; Abbreviated lower`-case day name.]
:: [s0;%- [* Dy]]
:: [s0; Abbreviated day name, first letter upper`-case, rest lower`-case.]
:: [s0;%- [* DY]]
:: [s0; Abbreviated upper`-case day name.]
:: [s0;%- [* tw]]
:: [s0; 12`-hour modulo format.]
:: [s0;%- [* a]]
:: [s0; Letter format, 1: a, 2: b, ... 26: z, 27: aa, ...]
:: [s0;%- [* A]]
:: [s0; Letter format, 1: a, 2: b, ... 26: z, 27: aa, ...]
:: [s0;%- [* r]]
:: [s0; Lower`-case roman numbers.]
:: [s0;%- [* R]]
:: [s0; Upper`-case roman numbers.]}}&]
[s0; &]
[s0; &]
[s0; [* Alternative real number formatters]&]
[s0; &]
[ {{1426:8574 [s0; [* n]]
:: [s0; fixed decimals]
:: [s0; [* v]]
:: [s0; valid decimals]
:: [s0; [* ne], [* ve]]
:: [s0; force exponential notation]
:: [s0; [* nf], [* vf]]
:: [s0; force fixed notation]
:: [s0; [* nl], [* vl]]
:: [s0; locale/language`-based formatting (can use `',`' instead of 
`'.`' and add thousands separators)]}}&]
[s0; &]
[s0; &]
[s0; The format of [*@(0.0.255) options] of alternative real number 
formatters is&]
[s0; &]
[s0; [*@4 `[][* `+][*@4 `]`[`[][* `-][*@4 `]][*@(0.0.255) digits][*@4 `]`[][* `@][*@4 `]`[][* ,][*@4 `]`[][* !
][*@4 `]`[][* `^][*@4 `[][* `+][*@4 `]][*@(0.0.255) expdig][*@4 `]]&]
[s0; &]
[ {{1426:8574 [s0; `+]
:: [s0; always prepend sign (even if positive number)]
:: [s0; [*@4 `[][* `-][*@4 `]][*@(0.0.255) digits]]
:: [s0; number of decimals to print (negative `= left of decimal point, 
default `= 6)]
:: [s0; `@]
:: [s0; do not use thousands separators (in internationalized formatting 
[* nl] or [* vl])]
:: [s0; [* ,]]
:: [s0; use `',`' instead of `'.`' for decimal point]
:: [s0; [* !]]
:: [s0; keep insignificant zeros]
:: [s0; [* `^]]
:: [s0; exponent options:&]
[ {{5000:5000 [s0; [* `+]]
:: [s0; always prepend sign to exponent]
:: [s0; [*@(0.0.255) expdig]]
:: [s0; exponent padding width]}}]}}&]
[s0; &]
[s0; &]
[s0; &]
[s0;%- [*/ Examples of standard formatters]&]
[s0; &]
[s0;3%- &]
[ {{5073:4927 [s0;%- Format(`"[* %d, %s]`", 123, `"TEXT`")]
:: [s0;%- 123, TEXT]
:: [s0;%- Format(`"[* %2:s, %1:d]`", 123, `"TEXT`")]
:: [s0;%- TEXT, 123]
:: [s0;%- Format(`"[* %010d]`", 123)]
:: [s0;%- 0000000123]
:: [s0;%- Format(`"[* %0`*d]`", 11, 123)]
:: [s0;%- 00000000123]
:: [s0;%- Format(`"[* `|%20<d`|]`", 123)]
:: [s0;%- `|123                 `|]
:: [s0;%- Format(`"[* `|%20>d`|]`", 123)]
:: [s0;%- `|                 123`|]
:: [s0;%- Format(`"[* `|%20`=d`|]`", 123)]
:: [s0;%- `|        123         `|]
:: [s0;%- Format(`"[* %dpt]`", 123)]
:: [s0;%- 123pt]
:: [s0;%- Format(`"[* %`[empty`]`~d, %`[empty`]`~d]`", 123, Null)]
:: [s0;%- 123, empty]
:: [s0;%- Format(`"[* %]`", 123)]
:: [s0;%- 123]
:: [s0;%- Format(`"[* %c]`", 65)]
:: [s0;%- A]
:: [s0;%- Format(`"[* %d]`", 123)]
:: [s0;%- 123]
:: [s0;%- Format(`"[* %i]`", 123)]
:: [s0;%- 123]
:: [s0;%- Format(`"[* %o]`", 123)]
:: [s0;%- 173]
:: [s0;%- Format(`"[* %x]`", 123)]
:: [s0;%- 7b]
:: [s0;%- Format(`"[* %X]`", 123)]
:: [s0;%- 7B]
:: [s0;%- Format(`"[* %e]`", 1234567.89)]
:: [s0;%- 1.234568e`+006]
:: [s0;%- Format(`"[* %E]`", 1234567.89)]
:: [s0;%- 1.234568E`+006]
:: [s0;%- Format(`"[* %f]`", 1234567.89)]
:: [s0;%- 1234567.890000]
:: [s0;%- Format(`"[* %g]`", 1234567.89)]
:: [s0;%- 1.23457e`+006]
:: [s0;%- Format(`"[* %G]`", 1234567.89)]
:: [s0;%- 1.23457E`+006]
:: [s0;%- Format(`"[* %n]`", 1234567.89)]
:: [s0;%- 1234567.89]
:: [s0;%- Format(`"[* %,n]`", 1234567.89)]
:: [s0;%- 1234567,89]
:: [s0;%- Format(`"[* %`+n]`", 1234567.89)]
:: [s0;%- `+1234567.89]
:: [s0;%- Format(`"[* %2,n]`", 123.456)]
:: [s0;%- 123,46]
:: [s0;%- Format(`"[* %2,n]`", 123)]
:: [s0;%- 123]
:: [s0;%- Format(`"[* %2!,n]`", 123)]
:: [s0;%- 123.00]
:: [s0;%- Format([* `"% %%%%`"], 12.3)]
:: [s0;%- 12.3 %]
:: [s0;%- Format(`"[* %ne]`", 1234567.89)]
:: [s0;%- 1234567.89]
:: [s0;%- Format(`"[* %nf]`", 1234567.89e30)]
:: [s0;%- 1234567890000000000000000000000000000]
:: [s0;%- Format(`"[* %nl]`", 1234567.89)]
:: [s0;%- 1,234,567.89]
:: [s0;%- Format(`"[* %`@nl]`", 1234567.89)]
:: [s0;%- 1234567.89]
:: [s0;%- Format(`"[* %`@,nl]`", 1234567.89)]
:: [s0;%- 1234567,89]
:: [s0;%- Format(`"[* %v]`", 1234567.89)]
:: [s0;%- 1234570]
:: [s0;%- Format(`"[* %ve]`", 1234567.89)]
:: [s0;%- 1234570]
:: [s0;%- Format(`"[* %vf]`", 1234567.89e30)]
:: [s0;%- 1234570000000000000000000000000000000]
:: [s0;%- Format(`"[* %vl]`", 1234567.89)]
:: [s0;%- 1,234,570]
:: [s0;%- Format(`"[* %`[1:one;2:two;3:three;another`]s]`", 2)]
:: [s0;%- two]
:: [s0;%- Format(`"[* %`[1:one;2:two;3:three;another`]s]`", 20)]
:: [s0;%- another]
:: [s0;%- Format(`"[* %`[3%1:one;2:two;3:three;another`]s]`", 20)]
:: [s0;%- two]
:: [s0;%- Format(`"[* %month]`", 6)]
:: [s0;%- june]
:: [s0;%- Format(`"[* %Month]`", 6)]
:: [s0;%- June]
:: [s0;%- Format(`"[* %MONTH]`", 6)]
:: [s0;%- JUNE]
:: [s0;%- Format(`"[* %mon]`", 6)]
:: [s0;%- jun]
:: [s0;%- Format(`"[* %Mon]`", 6)]
:: [s0;%- Jun]
:: [s0;%- Format(`"[* %MON]`", 6)]
:: [s0;%- JUN]
:: [s0;%- Format(`"[* %day]`", 6)]
:: [s0;%- saturday]
:: [s0;%- Format(`"[* %Day]`", 6)]
:: [s0;%- Saturday]
:: [s0;%- Format(`"[* %DAY]`", 6)]
:: [s0;%- SATURDAY]
:: [s0;%- Format(`"[* %dy]`", 6)]
:: [s0;%- sa]
:: [s0;%- Format(`"[* %Dy]`", 6)]
:: [s0;%- Sa]
:: [s0;%- Format(`"[* %DY]`", 6)]
:: [s0;%- SA]
:: [s0;%- Format(`"[* %tw]`", 0)]
:: [s0;%- 12]
:: [s0;%- Format(`"[* %tw]`", 5)]
:: [s0;%- 5]
:: [s0;%- Format(`"[* %tw]`", 15)]
:: [s0;%- 3]
:: [s0;%- Format(`"[* %0tw]`", 15)]
:: [s0;%- 03]
:: [s0;%- Format(`"[* %a]`", 1)]
:: [s0;%- a]
:: [s0;%- Format(`"[* %a]`", 123)]
:: [s0;%- es]
:: [s0;%- Format(`"[* %A]`", 1)]
:: [s0;%- A]
:: [s0;%- Format(`"[* %A]`", 123)]
:: [s0;%- ES]
:: [s0;%- Format(`"[* %r]`", 8)]
:: [s0;%- viii]
:: [s0;%- Format(`"[* %R]`", 1231)]
:: [s0;%- MCCXXXI]
:: [s0;%- Format(`"[* %]`", GetSysDate())]
:: [s0;%- 11/11/2011]
:: [s0;%- Format(`"[* %]`", GetSysTime())]
:: [s0;%- 11/11/2011 14:44:11]
:: [s0;%- Format(`"[* %]`", `"text`")]
:: [s0;%- text]}}&]
[s0; &]
[s0; &]
[s0; &]
[s0;%- [*@3+117 Registering custom formatters]&]
[s0; &]
[s5;:Formatter`:`:typedef:%- typedef_[^String^ String]_(`*Formatter)([@(0.0.255) const][@(64) _
][^Formatting^@(64) Formatting][@(64) `&_fmt)]&]
[s2; Formatter has to have form of function with single [^Formatting^ Formatting] 
argument.&]
[s1; &]
[ {{10000F(128)G(128)@1 [s0; [* Formatting]]}}&]
[s0;%- &]
[s1;:Formatting`:`:struct:%- [@(0.0.255) struct]_[* Formatting]&]
[s2; This structure passes all informations to format Value argument 
to the formatter.&]
[s3; &]
[s4;%- &]
[s5;:Formatting`:`:language:%- [@(0.0.255) int]_[* language]&]
[s2; Language of resulting text.&]
[s3;%- &]
[s4;%- &]
[s5;:Formatting`:`:arg:%- Value_[* arg]&]
[s2; Actual argument.&]
[s3;%- &]
[s4;%- &]
[s5;:Formatting`:`:format:%- String_[* format]&]
[s2; Formatting [*@(0.0.255) options].&]
[s3;%- &]
[s4;%- &]
[s5;:Formatting`:`:id:%- String_[* id]&]
[s2; Formatter`-id.&]
[s1; &]
[ {{10000F(128)G(128)@1 [s0; [* Format registration functions]]}}&]
[s3;%- &]
[s5;:RegisterFormatter`(int`,const char`*`,Formatter`)init`_:%- [@(0.0.255) void]_[* Regi
sterFormatter]([@(0.0.255) int]_[*@3 type], [@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 id],
 Formatter_[*@3 f])&]
[s2; Registers formatter for specific Value [%-*@3 type]. If [%-*@3 type] 
is VALUE`_V, formatter is applied to all Value types if no formatter 
for specific type is specified.&]
[s3;%- &]
[s4;%- &]
[s5;:RegisterNumberFormatter`(const char`*`,Formatter`)init`_:%- [@(0.0.255) void]_[* Reg
isterNumberFormatter]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 id], 
Formatter_[*@3 f])&]
[s2; Registers formatter for bool, int, double and int64 types.&]
[s3;%- &]
[s4;%- &]
[s5;:RegisterStringFormatter`(const char`*`,Formatter`)init`_:%- [@(0.0.255) void]_[* Reg
isterStringFormatter]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 id], 
Formatter_[*@3 f])&]
[s2; Registers formatter for String and WString types.&]
[s3;%- &]
[s4;%- &]
[s5;:RegisterDateTimeFormatter`(const char`*`,Formatter`)init`_:%- [@(0.0.255) void]_[* R
egisterDateTimeFormatter]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 id], 
Formatter_[*@3 f])&]
[s2; Registers formatter for Date and Time types.&]
[s3;%- &]
[s4;%- &]
[s5;:RegisterValueFormatter`(const char`*`,Formatter`)init`_:%- [@(0.0.255) void]_[* Regi
sterValueFormatter]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 id], 
Formatter_[*@3 f])&]
[s2; Registers formatter to be applied when no formatter for specific 
type is specified.&]
[s3; &]
[s4;%- &]
[s5;:RegisterNullFormatter`(const char`*`,Formatter`)init`_:%- [@(0.0.255) void]_[* Regis
terNullFormatter]([@(0.0.255) const]_[@(0.0.255) char]_`*[*@3 id], 
Formatter_[*@3 f])&]
[s2; Registers formatter [%-*@3 id] to be applied when the Value argument 
is Void (Value()) or ErrorValue.&]
[s3; &]
[s0; ]]