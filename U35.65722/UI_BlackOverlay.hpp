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
    float Fade;
    bool ToSpaceRig;
    class UTexture* loadingImage;

    void SetProgress(float InFade, bool InToSpacerig, class UTexture* InLoadingImage, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, float CallFunc_GetRenderOpacity_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FLinearColor K2Node_MakeStruct_LinearColor_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor_2, float CallFunc_FClamp_ReturnValue_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetFadeProgress(float Fade, bool ToSpaceRig, class UTexture* loadingImage);
    void ExecuteUbergraph_UI_BlackOverlay(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_Event_fade, bool K2Node_Event_toSpaceRig, class UTexture* K2Node_Event_loadingImage);
};

#endif
