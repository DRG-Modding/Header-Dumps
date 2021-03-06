#ifndef UE4SS_SDK_UI_RewardResourcesBox_HPP
#define UE4SS_SDK_UI_RewardResourcesBox_HPP

class UUI_RewardResourcesBox_C : public URewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CelebrateAnim;
    class UHorizontalBox* HorizontalBox_1;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UHorizontalBox* ResourceHolder;
    class UTextBlock* UnlockedText;
    TArray<class URewardWidget*> ResourceWidgets;

    void HasResources(bool& HasResources, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void PlayReceiveAnim();
    void AddResource(class URewardWidget* RewardWidget);
    void Clear();
    void ExecuteUbergraph_UI_RewardResourcesBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class URewardWidget* K2Node_CustomEvent_RewardWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class URewardWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
