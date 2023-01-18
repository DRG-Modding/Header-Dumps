#ifndef UE4SS_SDK_BP_CharacterShowroomController_HPP
#define UE4SS_SDK_BP_CharacterShowroomController_HPP

class UBP_CharacterShowroomController_C : public UCharacterShowroomController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_CharacterShown();
    void EquipWeapon(EItemCategory Category);
    void ExecuteUbergraph_BP_CharacterShowroomController(int32 EntryPoint);
};

#endif
