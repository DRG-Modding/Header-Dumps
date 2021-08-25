// Class WebBrowserWidget.WebBrowser
// Size: 0x150 (Inherited: 0x108)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x118(0x10)
	struct FString InitialURL; // 0x128(0x10)
	bool bSupportsTransparency; // 0x138(0x01)
	char UnknownData_139[0x17]; // 0x139(0x17)

	void OnUrlChanged__DelegateSignature(struct FText Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x78 (Inherited: 0x28)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<struct UMaterial> DefaultMaterial; // 0x28(0x28)
	char UnknownData_50[0x28]; // 0x50(0x28)
};

