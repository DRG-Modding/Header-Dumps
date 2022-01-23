#ifndef UE4SS_SDK_HUD_EnemyTargeting_Affliction_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_Affliction_HPP

class UHUD_EnemyTargeting_Affliction_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UUI_MaskedImage_C* AfflictionIcon;
    class UImage* BorderInner;
    class UImage* BorderOuter;
    class USizeBox* ImgSize;
    float Size;
    bool Active;
    class UPawnAffliction* Affliction;

    void UpdateTarget(class UPawnAfflictionComponent* InPawnAfflictions, bool IsActive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAfflictedBy_ReturnValue);
    void SetActive(bool Inactive, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnFadeInFinished();
    void ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int32 EntryPoint, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UPawnAffliction* K2Node_DynamicCast_AsPawn_Affliction, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_HUD_EnemyTargeting_AfflictionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
