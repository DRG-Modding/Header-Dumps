#ifndef UE4SS_SDK_UI_StartScreen_HPP
#define UE4SS_SDK_UI_StartScreen_HPP

class UUI_StartScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UWidgetAnimation* BlinkText;
    class UAnimatedDRGlogo_C* AnimatedDRGlogo;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    class UBorder* Border_Glow;
    class UImage* FadeOverlay;
    class UImage* GhostShipLogo;
    class UImage* Image_7;
    class UImage* Image_63;
    class UImage* Image_72;
    class UImage* Image_219;
    class UImage* Image_Background;
    class UImage* Image_Background_Black;
    class UImage* Image_Background_Smoke;
    class UCircularThrobber* LogginInThrobber;
    class UUI_AdvancedLabel_C* PressStartLabel;
    class UTextBlock* VersionInfo;

    void FadeIt(bool FadeIn, float& Duration, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Construct();
    void PressStart();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_StartScreen(int32 EntryPoint, class UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_FSDEventsReady_ReturnValue, bool CallFunc_IsEventActive_ReturnValue, bool CallFunc_IsEventActive_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FString CallFunc_GetProjectVersion_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, FExecuteUbergraph_UI_StartScreenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
