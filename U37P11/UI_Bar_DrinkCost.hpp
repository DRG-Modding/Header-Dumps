#ifndef UE4SS_SDK_UI_Bar_DrinkCost_HPP
#define UE4SS_SDK_UI_Bar_DrinkCost_HPP

class UUI_Bar_DrinkCost_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_13;
    class UTextBlock* TXT_Free;
    class UDrinkableDataAsset* Drinkable;
    bool ShowUnlockCost;
    float Height;

    void SetCostWidgets(const TMap<UResourceData*, int32>& TargetMap);
    void ShowCost(class UDrinkableDataAsset* Drinkable, bool ShowUnlockPrice);
    void Construct();
    void OnFreeBeerRewardChanged(bool IsBeersFree);
    void ShowFixedCost(const TMap<UResourceData*, int32>& Cost);
    void ExecuteUbergraph_UI_Bar_DrinkCost(int32 EntryPoint);
};

#endif
