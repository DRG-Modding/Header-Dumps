#ifndef UE4SS_SDK_Cheat_Collectible_HPP
#define UE4SS_SDK_Cheat_Collectible_HPP

class UCheat_Collectible_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_Material;
    class UCollectableResourceData* Resource;

    int32 GetTotalResourceCount();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_Collectible(int32 EntryPoint);
};

#endif
