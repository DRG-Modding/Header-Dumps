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
    void ExecuteUbergraph_Tutorial_Hint_EquipGrenade(int32 EntryPoint);
};

#endif
