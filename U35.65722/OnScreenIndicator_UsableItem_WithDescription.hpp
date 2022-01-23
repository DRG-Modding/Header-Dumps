#ifndef UE4SS_SDK_OnScreenIndicator_UsableItem_WithDescription_HPP
#define UE4SS_SDK_OnScreenIndicator_UsableItem_WithDescription_HPP

class UOnScreenIndicator_UsableItem_WithDescription_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UVerticalBox* holder;
    class UUI_AdvancedLabel_C* KeyLabel;
    class UProgressBar* Use_Progress;
    class UTextBlock* UseText;
    class UCharacterUseComponent* UseComponent;
    bool Initialized;
    float DepositingStartCapacity;

    class UUsableComponentBase* GetUsable(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UUsableComponentBase* K2Node_Select_Default);
    void SetTitle(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void SetAction(FText NewText, FText OverrideControllerText);
    void OnDepositingBegin(class UResourceBank* ResourceBank);
    void EndHover();
    void BeginHover(class UUsableComponentBase* Component);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void On Initialize();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription(int32 EntryPoint, class UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue, float CallFunc_GetCapacityPct_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsLookingAtDepositable_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_GetIsDepositing_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetBeginRevivedProgress_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsDown_ReturnValue, FText Temp_text_Variable, ECharacterState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UResourceBank* K2Node_CustomEvent_ResourceBank, ESlateVisibility Temp_byte_Variable_1, class UUsableComponentBase* CallFunc_GetUsable_ReturnValue, class UUsableComponent* K2Node_DynamicCast_AsUsable_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasDuration_ReturnValue, bool CallFunc_GetShowUsingUI_ReturnValue, FText Temp_text_Variable_1, class UUsableComponentBase* K2Node_CustomEvent_component, bool Temp_bool_Variable, FText K2Node_Select_Default, class UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue_1, float CallFunc_GetCapacityPct_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescriptionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const FText CallFunc_GetUseText_ReturnValue, float CallFunc_GetUseProgress_ReturnValue, bool CallFunc_GetIsUsing_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_HasCharacter_ReturnValue);
};

#endif
