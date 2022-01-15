#ifndef UE4SS_SDK_HUD_EnemyTargeting_Affliction_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_Affliction_HPP

class UHUD_EnemyTargeting_Affliction_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UUI_MaskedImage_C* AfflictionIcon;
    UImage* BorderInner;
    UImage* BorderOuter;
    USizeBox* ImgSize;
    float Size;
    bool Active;
    UPawnAffliction* Affliction;

    void UpdateTarget(UPawnAfflictionComponent* InPawnAfflictions, bool IsActive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAfflictedBy_ReturnValue);
    void SetActive(bool Inactive, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnFadeInFinished();
    void ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int32 EntryPoint, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UPawnAffliction* K2Node_DynamicCast_AsPawn_Affliction, bool K2Node_DynamicCast_bSuccess, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
