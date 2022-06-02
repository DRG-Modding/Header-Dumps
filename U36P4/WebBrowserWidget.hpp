#ifndef UE4SS_SDK_WebBrowserWidget_HPP
#define UE4SS_SDK_WebBrowserWidget_HPP

class UWebBrowser : public UWidget
{
    FWebBrowserOnUrlChanged OnUrlChanged;
    void OnUrlChanged(const FText& Text);
    FWebBrowserOnBeforePopup OnBeforePopup;
    void OnBeforePopup(FString URL, FString Frame);
    FString InitialURL;
    bool bSupportsTransparency;

    void OnUrlChanged__DelegateSignature(const FText& Text);
    void OnBeforePopup__DelegateSignature(FString URL, FString Frame);
    void LoadURL(FString NewURL);
    void LoadString(FString Contents, FString DummyURL);
    FString GetUrl();
    FText GetTitleText();
    void ExecuteJavascript(FString ScriptText);
};

class UWebBrowserAssetManager : public UObject
{
    TSoftObjectPtr<UMaterial> DefaultMaterial;

};

#endif
