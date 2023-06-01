#ifndef UE4SS_SDK_UI_BlackOverlay_HPP
#define UE4SS_SDK_UI_BlackOverlay_HPP

class UUI_BlackOverlay_C : public UFSDLevelLoadingPersistentWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* FullscreenImage;
    class UUI_AdvancedLabel_C* LoaderText;
    class UUI_PlayerSpeaking_List_C* PlayersSpeaking;
    class UImage* ScaledImage;
    class UImage* Shadow;
    class UOverlay* TextOverlay;
    float fade;
    bool ToSpaceRig;
    class UTexture* LoadingImage;

    void SetProgress(float InFade, bool InToSpacerig, class UTexture* InLoadingImage);
    void PreConstruct(bool IsDesignTime);
    void SetFadeProgress(float fade, bool ToSpaceRig, class UTexture* LoadingImage);
    void ExecuteUbergraph_UI_BlackOverlay(int32 EntryPoint);
};

#endif
