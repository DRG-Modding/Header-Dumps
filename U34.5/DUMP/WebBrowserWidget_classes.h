// Class WebBrowserWidget.WebBrowser
// Size: 0x150 (Inherited: 0x108)
struct UWebBrowser : UWidget {
	FMulticastInlineDelegate OnUrlChanged; // 0x108(0x10)
	FMulticastInlineDelegate OnBeforePopup; // 0x118(0x10)
	FString InitialURL; // 0x128(0x10)
	bool bSupportsTransparency; // 0x138(0x01)

	void OnUrlChanged__DelegateSignature(FText Text);
	void OnBeforePopup__DelegateSignature(FString URL, FString Frame);
	void LoadURL(FString NewURL);
	void LoadString(FString Contents, FString DummyURL);
	FString GetUrl();
	FText GetTitleText();
	void ExecuteJavascript(FString ScriptText);
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x78 (Inherited: 0x28)
struct UWebBrowserAssetManager : UObject {
	TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28(0x28)
};

