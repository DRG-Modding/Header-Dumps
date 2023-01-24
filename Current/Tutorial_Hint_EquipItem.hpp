#ifndef UE4SS_SDK_Tutorial_Hint_EquipItem_HPP
#define UE4SS_SDK_Tutorial_Hint_EquipItem_HPP

class UTutorial_Hint_EquipItem_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;
    bool HasEquipped;
    EItemCategory ItemCategory;

    void ReceiveOnInitialized();
    void ItemEquipped(class AItem* Item);
    void ReceiveOnHidden();
    void ExecuteUbergraph_Tutorial_Hint_EquipItem(int32 EntryPoint);
};

#endif
