#ifndef UE4SS_SDK_UI_StartScreen_HPP
#define UE4SS_SDK_UI_StartScreen_HPP

class UUI_StartScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* FadeOut;
    UWidgetAnimation* BlinkText;
    UAnimatedDRGlogo_C* AnimatedDRGlogo;
    UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    UBorder* Border_Glow;
    UImage* FadeOverlay;
    UImage* GhostShipLogo;
    UImage* Image_7;
    UImage* Image_63;
    UImage* Image_72;
    UImage* Image_219;
    UImage* Image_Background;
    UImage* Image_Background_Black;
    UImage* Image_Background_Smoke;
    UCircularThrobber* LogginInThrobber;
    UUI_AdvancedLabel_C* PressStartLabel;
    UTextBlock* VersionInfo;

    void FadeIt(bool FadeIn, float& Duration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Construct();
    void PressStart();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_StartScreen(int32 EntryPoint, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_FSDEventsReady_ReturnValue, bool CallFunc_IsEventActive_ReturnValue, bool CallFunc_IsEventActive_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FString CallFunc_GetProjectVersion_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_StringToText_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
