#ifndef UE4SS_SDK_UI_Bar_LockWarning_HPP
#define UE4SS_SDK_UI_Bar_LockWarning_HPP

class UUI_Bar_LockWarning_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Anim_InfoBoxAppear;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_82;
    UImage* Image_84;
    UImage* Image_85;
    USizeBox* PlayerRankToolTip;
    UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;

    void AnimStop(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void AnimPlay(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void SetPrice(UDrinkableDataAsset* Drinkable);
    void SetFixedPrice(const TMap<UResourceData*, int32>& Cost);
    void ExecuteUbergraph_UI_Bar_LockWarning(int32 EntryPoint, UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, const TMap<UResourceData*, int32> K2Node_CustomEvent_Cost);
}

#endif
