//-------------------------------------------------------------------------------------------------
// Login page
/*
const char* loginIndex =
"<form name='loginForm'>"
"<table width='20%' bgcolor='A09F9F' align='center'>"
"<tr>"
"<td colspan=2>"
"<center><font size=4><b>ESP32 update Login Page</b></font></center>"
"<br>"
"</td>"
"<br>"
"<br>"
"</tr>"
"<td>Username: admin</td>"
"<td><input type='text' size=25 name='userid'><br></td>"
"</tr>"
"<br>"
"<br>"
"<tr>"
"<td>Password: autosteer</td>"
"<td><input type='Password' size=25 name='pwd'><br></td>"
"<br>"
"<br>"
"</tr>"
"<tr>"
"<td><input type='submit' onclick='check(this.form)' value='Login'></td>"
"<td><input type='submit' onclick='cancel(this.form)' value='Cancel'></td>"
//"<td><button style= \"width:120px\" name=\"cancel\">cancel update</button></td></tr>"
"</tr>"
"</table>"
"</form>"
"<script>"
"function check(form)"
"{"
"window.open('/serverIndex')"
"}"
"</script>"
"<script>"
"function cancel(form)"
"{"
//"window.open('/cancel')"
"window.close"
"}"
"</script>";

*/

//-------------------------------------------------------------------------------------------------
// Server Index Page 

const char* serverIndex =
"<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script>"
"<head>"
"<title>Firmware updater</title>"
"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0;\" />\r\n""<style>divbox {background-color: lightgrey;width: 200px;border: 5px solid red;padding:10px;margin: 10px;}</style>"
"</head>"
"<body bgcolor=\"#66b3ff\">""<font color=\"#000000\" face=\"VERDANA,ARIAL,HELVETICA\">"
"<h1>ESP firmware update</h1>"
"ver 4.2 26. Apr. 2020<br><br>"
"<form method='POST' action='#' enctype='multipart/form-data' id='upload_form'>"
"<br>Create a .bin file with Arduino IDE: Sketch -> Export compiled Binary<br>"
"<br><b>select .bin file to upload</b>"
"<br>"
"<br>"
"<input type='file' name='update'>"
"<input type='submit' value='Update'>"
"</form>"
"<div id='prg'>progress: 0%</div>"
"<script>"
"$('form').submit(function(e){"
"e.preventDefault();"
"var form = $('#upload_form')[0];"
"var data = new FormData(form);"
" $.ajax({"
"url: '/update',"
"type: 'POST',"
"data: data,"
"contentType: false,"
"processData:false,"
"xhr: function() {"
"var xhr = new window.XMLHttpRequest();"
"xhr.upload.addEventListener('progress', function(evt) {"
"if (evt.lengthComputable) {"
"var per = evt.loaded / evt.total;"
"$('#prg').html('progress: ' + Math.round(per*100) + '%');"
"}"
"}, false);"
"return xhr;"
"},"
"success:function(d, s) {"
"console.log('success!')"
"},"
"error: function (a, b, c) {"
"}"
"});"
"});"
"</script>";