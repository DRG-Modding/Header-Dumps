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
    void ExecuteUbergraph_Tutorial_Hint_EquipItem(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_Tutorial_Hint_EquipItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AItem* K2Node_CustomEvent_Item, class AItem* CallFunc_GetItem_ReturnValue, bool CallFunc_HasTutorialBeenShown_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_Select_Default);
};

#endif
