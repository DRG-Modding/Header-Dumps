#ifndef UE4SS_SDK_Tutorial_Hint_EquipGrenade_HPP
#define UE4SS_SDK_Tutorial_Hint_EquipGrenade_HPP

class UTutorial_Hint_EquipGrenade_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool HasEquipped;
    float FirstTimeDelay;
    float AfterUseDelay;

    void GrenadeThrown();
    void ReceiveOnInitialized();
    void ReceiveOnHidden();
    void ExecuteUbergraph_Tutorial_Hint_EquipGrenade(int32 EntryPoint, FExecuteUbergraph_Tutorial_Hint_EquipGrenadeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool CallFunc_HasTutorialBeenShown_ReturnValue, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
};

#endif
