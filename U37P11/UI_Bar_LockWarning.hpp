#ifndef UE4SS_SDK_UI_Bar_LockWarning_HPP
#define UE4SS_SDK_UI_Bar_LockWarning_HPP

class UUI_Bar_LockWarning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anim_InfoBoxAppear;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_82;
    class UImage* Image_84;
    class UImage* Image_85;
    class USizeBox* PlayerRankToolTip;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;

    void AnimStop();
    void AnimPlay();
    void Construct();
    void SetPrice(class UDrinkableDataAsset* Drinkable);
    void SetFixedPrice(const TMap<UResourceData*, int32>& Cost);
    void ExecuteUbergraph_UI_Bar_LockWarning(int32 EntryPoint);
};

#endif
