/***************************************************************************
 *   Copyright (C) 2007 by Alexander S. Salieff                            *
 *   salieff@mail.ru                                                       *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include <map>
#include <string>

using namespace std;

static map<unsigned int, string> x_status_map;
static map<unsigned int, string> country_map;
static map<unsigned int, string> gender_map;
static map<unsigned int, string> lang_map;
static map<unsigned int, string> marital_map;
static map<unsigned int, string> occupation_map;
static map<unsigned int, string> interest_map;
static map<unsigned int, string> past_map;
static map<unsigned int, string> affil_map;

static string map_index_to_string(unsigned int ind, map<unsigned int, string> & mymap)
{
 map<unsigned int, string>::iterator i = mymap.find(ind);
 if (i==mymap.end()) return "Unknown";
 return i->second;
}

string x_status2string(unsigned int ind) { return map_index_to_string(ind, x_status_map); }
string country2string(unsigned int ind) { return map_index_to_string(ind, country_map); }
string gender2string(unsigned int ind) { return map_index_to_string(ind, gender_map); }
string lang2string(unsigned int ind) { return map_index_to_string(ind, lang_map); }
string marital2string(unsigned int ind) { return map_index_to_string(ind, marital_map); }
string occupation2string(unsigned int ind) { return map_index_to_string(ind, occupation_map); }
string interest2string(unsigned int ind) { return map_index_to_string(ind, interest_map); }
string past2string(unsigned int ind) { return map_index_to_string(ind, past_map); }
string affil2string(unsigned int ind) { return map_index_to_string(ind, affil_map); }

void init_strings_maps(void)
{
 x_status_map[0]="None";
 x_status_map[1]="Angry";
 x_status_map[2]="Bath";
 x_status_map[3]="Tired";
 x_status_map[4]="Party";
 x_status_map[5]="Beer";
 x_status_map[6]="Think";
 x_status_map[7]="Eat";
 x_status_map[8]="Tv";
 x_status_map[9]="Meet";
 x_status_map[10]="Coffee";
 x_status_map[11]="Music";
 x_status_map[12]="Business";
 x_status_map[13]="Shoot";
 x_status_map[14]="Fun";
 x_status_map[15]="Phone";
 x_status_map[16]="Game";
 x_status_map[17]="Study";
 x_status_map[18]="Shop";
 x_status_map[19]="Sick";
 x_status_map[20]="Sleep";
 x_status_map[21]="Surfing";
 x_status_map[22]="Browse";
 x_status_map[23]="Work";
 x_status_map[24]="Type";
 x_status_map[25]="Picnic";
 x_status_map[26]="Cook";
 x_status_map[27]="Smoke";
 x_status_map[28]="Im_high";
 x_status_map[29]="Wc";
 x_status_map[30]="Be_not_be";
 x_status_map[31]="Pro7_tv";
 x_status_map[32]="Love";
 
 country_map[0]="Unspecified";
 country_map[9999]="Other";
 country_map[93]="Afghanistan";
 country_map[355]="Albania";
 country_map[213]="Algeria";
 country_map[684]="American_samoa";
 country_map[376]="Andorra";
 country_map[244]="Angola";
 country_map[101]="Anguilla";
 country_map[102]="Antigua_and_barbuda";
 country_map[5902]="Antilles";
 country_map[54]="Argentina";
 country_map[374]="Armenia";
 country_map[297]="Aruba";
 country_map[247]="Ascension_island";
 country_map[61]="Australia";
 country_map[43]="Austria";
 country_map[994]="Azerbaijan";
 country_map[103]="Bahamas";
 country_map[973]="Bahrain";
 country_map[880]="Bangladesh";
 country_map[104]="Barbados";
 country_map[120]="Barbuda";
 country_map[375]="Belarus";
 country_map[32]="Belgium";
 country_map[501]="Belize";
 country_map[229]="Benin";
 country_map[105]="Bermuda";
 country_map[975]="Bhutan";
 country_map[591]="Bolivia";
 country_map[387]="Bosnia_and_herzegovina";
 country_map[267]="Botswana";
 country_map[55]="Brazil";
 country_map[106]="British_virgin_islands";
 country_map[673]="Brunei";
 country_map[359]="Bulgaria";
 country_map[226]="Burkina_faso";
 country_map[257]="Burundi";
 country_map[855]="Cambodia";
 country_map[237]="Cameroon";
 country_map[107]="Canada";
 country_map[178]="Canary_islands";
 country_map[238]="Cape_verde_islands";
 country_map[108]="Cayman_islands";
 country_map[236]="Central_african_republic";
 country_map[235]="Chad";
 country_map[56]="Chile";
 country_map[86]="China";
 country_map[672]="Christmas_island";
 country_map[6102]="Cocos_islands";
 country_map[6101]="Cocos_keeling_islands";
 country_map[57]="Colombia";
 country_map[2691]="Comoros";
 country_map[242]="Congo";
 country_map[243]="Congo_zaire";
 country_map[682]="Cook_islands";
 country_map[506]="Costa_rica";
 country_map[385]="Croatia";
 country_map[53]="Cuba";
 country_map[357]="Cyprus";
 country_map[420]="Czech_republic";
 country_map[45]="Denmark";
 country_map[246]="Diego_garcia";
 country_map[253]="Djibouti";
 country_map[109]="Dominica";
 country_map[110]="Dominican_republic";
 country_map[593]="Ecuador";
 country_map[20]="Egypt";
 country_map[503]="El_salvador";
 country_map[240]="Equatorial_guinea";
 country_map[291]="Eritrea";
 country_map[372]="Estonia";
 country_map[251]="Ethiopia";
 country_map[298]="Faeroe_islands";
 country_map[500]="Falkland_islands";
 country_map[679]="Fiji";
 country_map[358]="Finland";
 country_map[33]="France";
 country_map[5901]="French_antilles";
 country_map[594]="French_guiana";
 country_map[689]="French_polynesia";
 country_map[241]="Gabon";
 country_map[220]="Gambia";
 country_map[995]="Georgia";
 country_map[49]="Germany";
 country_map[233]="Ghana";
 country_map[350]="Gibraltar";
 country_map[30]="Greece";
 country_map[299]="Greenland";
 country_map[111]="Grenada";
 country_map[590]="Guadeloupe";
 country_map[671]="Guam_us";
 country_map[502]="Guatemala";
 country_map[224]="Guinea";
 country_map[245]="Guinea_bissau";
 country_map[592]="Guyana";
 country_map[509]="Haiti";
 country_map[504]="Honduras";
 country_map[852]="Hong_kong";
 country_map[36]="Hungary";
 country_map[354]="Iceland";
 country_map[91]="India";
 country_map[62]="Indonesia";
 country_map[98]="Iran";
 country_map[964]="Iraq";
 country_map[353]="Ireland";
 country_map[972]="Israel";
 country_map[39]="Italy";
 country_map[225]="Ivory_coast";
 country_map[112]="Jamaica";
 country_map[81]="Japan";
 country_map[962]="Jordan";
 country_map[705]="Kazakhstan";
 country_map[254]="Kenya";
 country_map[686]="Kiribati";
 country_map[850]="Korea_north";
 country_map[82]="Korea_south";
 country_map[965]="Kuwait";
 country_map[706]="Kyrgyzstan";
 country_map[856]="Laos";
 country_map[371]="Latvia";
 country_map[961]="Lebanon";
 country_map[266]="Lesotho";
 country_map[231]="Liberia";
 country_map[218]="Libya";
 country_map[4101]="Liechtenstein";
 country_map[370]="Lithuania";
 country_map[352]="Luxembourg";
 country_map[853]="Macau";
 country_map[389]="Macedonia";
 country_map[261]="Madagascar";
 country_map[265]="Malawi";
 country_map[60]="Malaysia";
 country_map[960]="Maldives";
 country_map[223]="Mali";
 country_map[356]="Malta";
 country_map[692]="Marshall_islands";
 country_map[596]="Martinique";
 country_map[222]="Mauritania";
 country_map[230]="Mauritius";
 country_map[269]="Mayotte_island";
 country_map[52]="Mexico";
 country_map[691]="Micronesia";
 country_map[373]="Moldova";
 country_map[377]="Monaco";
 country_map[976]="Mongolia";
 country_map[113]="Montserrat";
 country_map[212]="Morocco";
 country_map[258]="Mozambique";
 country_map[95]="Myanmar";
 country_map[264]="Namibia";
 country_map[674]="Nauru";
 country_map[977]="Nepal";
 country_map[31]="Netherlands";
 country_map[599]="Netherlands_antilles";
 country_map[114]="Nevis";
 country_map[687]="New_caledonia";
 country_map[64]="New_zealand";
 country_map[505]="Nicaragua";
 country_map[227]="Niger";
 country_map[234]="Nigeria";
 country_map[683]="Niue";
 country_map[6722]="Norfolk_island";
 country_map[47]="Norway";
 country_map[968]="Oman";
 country_map[92]="Pakistan";
 country_map[680]="Palau";
 country_map[507]="Panama";
 country_map[675]="Papua_new_guinea";
 country_map[595]="Paraguay";
 country_map[51]="Peru";
 country_map[63]="Philippines";
 country_map[48]="Poland";
 country_map[351]="Portugal";
 country_map[121]="Puerto_rico";
 country_map[974]="Qatar";
 country_map[262]="Reunion_island";
 country_map[40]="Romania";
 country_map[6701]="Rota_island";
 country_map[7]="Russia";
 country_map[250]="Rwanda";
 country_map[290]="Saint_helena";
 country_map[115]="Saint_kitts";
 country_map[1141]="Saint_kitts_and_nevis";
 country_map[122]="Saint_lucia";
 country_map[508]="Saint_pierre_and_miquelon";
 country_map[116]="Saint_vincent_and_the_grenadines";
 country_map[670]="Saipan_island";
 country_map[378]="San_marino";
 country_map[239]="Sao_tome_and_principe";
 country_map[966]="Saudi_arabia";
 country_map[442]="Scotland";
 country_map[221]="Senegal";
 country_map[248]="Seychelles";
 country_map[232]="Sierra_leone";
 country_map[65]="Singapore";
 country_map[421]="Slovakia";
 country_map[386]="Slovenia";
 country_map[677]="Solomon_islands";
 country_map[252]="Somalia";
 country_map[27]="South_africa";
 country_map[34]="Spain";
 country_map[94]="Sri_lanka";
 country_map[249]="Sudan";
 country_map[597]="Suriname";
 country_map[268]="Swaziland";
 country_map[46]="Sweden";
 country_map[41]="Switzerland";
 country_map[963]="Syrian_arab_republic";
 country_map[886]="Taiwan";
 country_map[708]="Tajikistan";
 country_map[255]="Tanzania";
 country_map[66]="Thailand";
 country_map[6702]="Tinian_island";
 country_map[228]="Togo";
 country_map[690]="Tokelau";
 country_map[676]="Tonga";
 country_map[117]="Trinidad_and_tobago";
 country_map[216]="Tunisia";
 country_map[90]="Turkey";
 country_map[709]="Turkmenistan";
 country_map[118]="Turks_and_caicos_islands";
 country_map[688]="Tuvalu";
 country_map[256]="Uganda";
 country_map[380]="Ukraine";
 country_map[971]="United_arab_emirates";
 country_map[44]="United_kingdom";
 country_map[598]="Uruguay";
 country_map[1]="Usa";
 country_map[711]="Uzbekistan";
 country_map[678]="Vanuatu";
 country_map[379]="Vatican_city";
 country_map[58]="Venezuela";
 country_map[84]="Vietnam";
 country_map[123]="Virgin_islands";
 country_map[441]="Wales";
 country_map[681]="Wallis_and_futuna_islands";
 country_map[685]="Western_samoa";
 country_map[967]="Yemen";
 country_map[381]="Yugoslavia";
 country_map[382]="Yugoslavia_montenegro";
 country_map[3811]="Yugoslavia_serbia";
 country_map[260]="Zambia";
 country_map[263]="Zimbabwe";
 
 gender_map[0]="Unknown";
 gender_map[1]="Female";
 gender_map[2]="Male";
 
 lang_map[0]="None";
 lang_map[55]="Afrikaans";
 lang_map[58]="Albanian";
 lang_map[1]="Arabic";
 lang_map[59]="Armenian";
 lang_map[68]="Azerbaijani";
 lang_map[72]="Belorussian";
 lang_map[2]="Bhojpuri";
 lang_map[56]="Bosnian";
 lang_map[3]="Bulgarian";
 lang_map[4]="Burmese";
 lang_map[5]="Cantonese";
 lang_map[6]="Catalan";
 lang_map[61]="Chamorro";
 lang_map[7]="Chinese";
 lang_map[8]="Croatian";
 lang_map[9]="Czech";
 lang_map[10]="Danish";
 lang_map[11]="Dutch";
 lang_map[12]="English";
 lang_map[13]="Esperanto";
 lang_map[14]="Estonian";
 lang_map[15]="Farci";
 lang_map[16]="Finnish";
 lang_map[17]="French";
 lang_map[18]="Gaelic";
 lang_map[19]="German";
 lang_map[20]="Greek";
 lang_map[70]="Gujarati";
 lang_map[21]="Hebrew";
 lang_map[22]="Hindi";
 lang_map[23]="Hungarian";
 lang_map[24]="Icelandic";
 lang_map[25]="Indonesian";
 lang_map[26]="Italian";
 lang_map[27]="Japanese";
 lang_map[28]="Khmer";
 lang_map[29]="Korean";
 lang_map[69]="Kurdish";
 lang_map[30]="Lao";
 lang_map[31]="Latvian";
 lang_map[32]="Lithuanian";
 lang_map[65]="Macedonian";
 lang_map[33]="Malay";
 lang_map[63]="Mandarin";
 lang_map[62]="Mongolian";
 lang_map[34]="Norwegian";
 lang_map[57]="Persian";
 lang_map[35]="Polish";
 lang_map[36]="Portuguese";
 lang_map[60]="Punjabi";
 lang_map[37]="Romanian";
 lang_map[38]="Russian";
 lang_map[39]="Serbo_croatian";
 lang_map[66]="Sindhi";
 lang_map[40]="Slovak";
 lang_map[41]="Slovenian";
 lang_map[42]="Somali";
 lang_map[43]="Spanish";
 lang_map[44]="Swahili";
 lang_map[45]="Swedish";
 lang_map[46]="Tagalog";
 lang_map[64]="Taiwaness";
 lang_map[71]="Tamil";
 lang_map[47]="Tatar";
 lang_map[48]="Thai";
 lang_map[49]="Turkish";
 lang_map[50]="Ukrainian";
 lang_map[51]="Urdu";
 lang_map[52]="Vietnamese";
 lang_map[67]="Welsh";
 lang_map[53]="Yiddish";
 lang_map[54]="Yoruba";
 
 marital_map[0]="Unspecified";
 marital_map[10]="Single";
 marital_map[11]="Close_relationships";
 marital_map[12]="Engaged";
 marital_map[20]="Married";
 marital_map[30]="Divorced";
 marital_map[31]="Separated";
 marital_map[40]="Widowed";

 occupation_map[0]="Unspecified";
 occupation_map[1]="Academic";
 occupation_map[2]="Administrative";
 occupation_map[3]="Art_entertainment";
 occupation_map[4]="College_student";
 occupation_map[5]="Computers";
 occupation_map[6]="Community_social";
 occupation_map[7]="Education";
 occupation_map[8]="Engineering";
 occupation_map[9]="Financial_services";
 occupation_map[10]="Government";
 occupation_map[11]="High_school_student";
 occupation_map[12]="Home";
 occupation_map[13]="Icq_providing_help";
 occupation_map[14]="Law";
 occupation_map[15]="Managerial";
 occupation_map[16]="Manufacturing";
 occupation_map[17]="Medical_health";
 occupation_map[18]="Military";
 occupation_map[19]="Non_government_organization";
 occupation_map[20]="Professional";
 occupation_map[21]="Retail";
 occupation_map[22]="Retired";
 occupation_map[23]="Science_research";
 occupation_map[24]="Sports";
 occupation_map[25]="Technical";
 occupation_map[26]="University_student";
 occupation_map[27]="Web_building";
 occupation_map[99]="Other_services";

 interest_map[0]="Unspecified";
 interest_map[100]="Art";
 interest_map[101]="Cars";
 interest_map[102]="Celebrity_fans";
 interest_map[103]="Collections";
 interest_map[104]="Computers";
 interest_map[105]="Culture_literature";
 interest_map[106]="Fitness";
 interest_map[107]="Games";
 interest_map[108]="Hobbies";
 interest_map[109]="Icq_providing_help";
 interest_map[110]="Internet";
 interest_map[111]="Lifestyle";
 interest_map[112]="Movies_tv";
 interest_map[113]="Music";
 interest_map[114]="Outdoor_activities";
 interest_map[115]="Parenting";
 interest_map[116]="Pets_animals";
 interest_map[117]="Religion";
 interest_map[118]="Science_technology";
 interest_map[119]="Skills";
 interest_map[120]="Sports";
 interest_map[121]="Web_design";
 interest_map[122]="Nature_and_environment";
 interest_map[123]="News_media";
 interest_map[124]="Government";
 interest_map[125]="Business_economy";
 interest_map[126]="Mystics";
 interest_map[127]="Travel";
 interest_map[128]="Astronomy";
 interest_map[129]="Space";
 interest_map[130]="Clothing";
 interest_map[131]="Parties";
 interest_map[132]="Women";
 interest_map[133]="Social_science";
 interest_map[134]="60s";
 interest_map[135]="70s";
 interest_map[136]="80s";
 interest_map[137]="50s";
 interest_map[138]="Finance_and_corporate";
 interest_map[139]="Entertainment";
 interest_map[140]="Consumer_electronics";
 interest_map[141]="Retail_stores";
 interest_map[142]="Health_and_beauty";
 interest_map[143]="Media";
 interest_map[144]="Household_products";
 interest_map[145]="Mail_order_catalog";
 interest_map[146]="Business_services";
 interest_map[147]="Audio_and_visual";
 interest_map[148]="Sporting_and_athletic";
 interest_map[149]="Publishing";
 interest_map[150]="Home_automation";

 past_map[0]="Unspecified";
 past_map[300]="Elementary_school";
 past_map[301]="High_school";
 past_map[302]="College";
 past_map[303]="University";
 past_map[304]="Military";
 past_map[305]="Past_work_place";
 past_map[306]="Past_organization";
 past_map[399]="Other";

 affil_map[0]="Unspecified";
 affil_map[200]="Alumni_org";
 affil_map[201]="Charity_org";
 affil_map[202]="Club_social_org";
 affil_map[203]="Community_org";
 affil_map[204]="Cultural_org";
 affil_map[205]="Fan_clubs";
 affil_map[206]="Fraternity_sorority";
 affil_map[207]="Hobbyists_org";
 affil_map[208]="International_org";
 affil_map[209]="Nature_and_environment_org";
 affil_map[210]="Professional_org";
 affil_map[211]="Scientific_technical_org";
 affil_map[212]="Self_improvement_group";
 affil_map[213]="Spiritual_religious_org";
 affil_map[214]="Sports_org";
 affil_map[215]="Support_org";
 affil_map[216]="Trade_and_business_org";
 affil_map[217]="Union";
 affil_map[218]="Volunteer_org";
 affil_map[299]="Other";
}
