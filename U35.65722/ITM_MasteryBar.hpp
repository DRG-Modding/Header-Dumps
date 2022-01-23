#ifndef UE4SS_SDK_ITM_MasteryBar_HPP
#define UE4SS_SDK_ITM_MasteryBar_HPP

class UITM_MasteryBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* BarSize;
    class UHorizontalBox* MasteryBar;
    class UBorder* MasteryBar_BG;
    class AFSDPlayerState* PlayerState;
    class UItemID* itemClass;
    class UMasteryIconWidget* CurrentMasteryWidget;
    float Height;
    int32 PreviewCurrentMastery;
    int32 PreviewMaxMastery;
    TArray<FMasteryItem> PreviewMasteryLevels;
    FMargin Padding_Border;
    FMargin Padding_Node;
    bool Show Icons;
    FITM_MasteryBar_COnItemRewarded OnItemRewarded;
    void OnItemRewarded(FMasteryItem Reward);

    void SetMasteryData(class AFSDPlayerState* Player, class UItemID* Item, bool& HasMasteryLevels, int32 CallFunc_GetMasteryProgress_maxMastery, int32 CallFunc_GetMasteryProgress_ReturnValue, TArray<FMasteryItem>& CallFunc_GetMasteryLevels_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void AddMasteryBox(class UWidget* Content, FSlateChildSize K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
    void CreateMasteryLevels(int32 maxMastery, int32 CurrentMastery, class UItemID* Item, TArray<FMasteryItem>& masteryLevels, int32 CurrentMasteryIndex, bool Filled, int32 Index, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_MasteryBar_Block_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FMasteryItem CallFunc_GetMasteryForLevel_outLevel, bool CallFunc_GetMasteryForLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UITM_MasteryBar_Icon_C* CallFunc_Create_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ItemUpgradePurchased();
    void ExecuteUbergraph_ITM_MasteryBar(int32 EntryPoint, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetMasteryData_HasMasteryLevels, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FMasteryItem>& CallFunc_GetMasteryLevels_ReturnValue, FMasteryItem CallFunc_GetMasteryForLevel_outLevel, bool CallFunc_GetMasteryForLevel_ReturnValue);
    void OnItemRewarded__DelegateSignature(FMasteryItem Reward);
};

#endif
