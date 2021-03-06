#ifndef UE4SS_SDK_HUD_Resources_Team_Icon_HPP
#define UE4SS_SDK_HUD_Resources_Team_Icon_HPP

class UHUD_Resources_Team_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* PingAmount;
    class UWidgetSwitcher* AmountSwitcher;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UInvalidationBox* Invalidation;
    class UHUD_DefaultLabel_C* ResourceAmount;
    class UImage* ResourceCompleted;
    class UHUD_DefaultLabel_C* ResourceName;
    class UCappedResource* Resource;
    float Amount;
    bool HideIfEmpty;
    bool Counting;
    bool Completed;

    void UpdateAmount(float DeltaSeconds, float Difference, float TargetAmount, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue);
    void SetResource(class UCappedResource* InResource, bool HideIfEmpty);
    void Init Resource();
    void OnChanged(class UCappedResource* Resource, float Amount);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnPingAmountFinished();
    void ExecuteUbergraph_HUD_Resources_Team_Icon(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_HUD_Resources_Team_IconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_HUD_Resources_Team_IconK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsObjectiveResource_IsCompleted, bool CallFunc_IsObjectiveResource_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
