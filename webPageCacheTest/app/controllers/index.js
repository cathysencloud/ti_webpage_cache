$.download_btn.title = "下载到本地";

$.scan_btn.title = "打开本地文件";

var cachewebpage = require("com.sencloud.webpagecache");

function download_click(e) {

	var cid = "c2";
	//得到应用在系统中的路径
	var root = Ti.Filesystem.getApplicationCacheDirectory();
	//得到系统路径的分隔符，（左斜杠"/"或右斜杠"\"）
	var sep = Ti.Filesystem.getSeparator();
	//创建一个下载后HTML存放的路径：系统路径+系统分隔符+cardId
	var cacheDir = Ti.Filesystem.getFile(root + sep + cid);
	//判断该路径是否存在，存在，打印提示信息，不存在，创建该路径
	if (cacheDir.exists()) {
		Ti.API.info("cacheDir.exists");
	} else {
		Ti.API.info("cacheDir not exists");
		cacheDir.createDirectory();
	}

	Ti.API.info(cacheDir.resolve());
	Ti.API.info(cacheDir.getNativePath());

	cachewebpage.cacheWebpage({
		url : "http://192.168.2.223/waveo/msg/",
		cacheDir : cacheDir.resolve().substring(7),
		cid : cid,
		success : _doSuccess,
		failed : _doFailed
	});
}

function _doSuccess(e) {
	Ti.API.info("_doSuccess e: " + JSON.stringify(e));
	// Ti.API.info("_doSuccess " + e.desurl);
	alert("download success");
}

function _doFailed(e) {
	Ti.API.info("_doFailed e: " + JSON.stringify(e));
	alert("download failed");
}

function scan_click(e) {
	// Alloy.createController("openhtml").getView().open();
	//创建一个webView用于打开已下载的HTML文件，URL表示的是已下载的HTML存放的路径
	var webview = Titanium.UI.createWebView({
		url : 'file://com.android.htmlfileprovider/data/data/com.sencloud.webpagecache/cache/c2/index.html'
	});
	var window = Titanium.UI.createWindow();
	window.add(webview);
	window.open({
		modal : true
	});
}

$.index.open();

