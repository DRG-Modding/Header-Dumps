#ifndef UE4SS_SDK_BP_Shotgun_A_Shell_HPP
#define UE4SS_SDK_BP_Shotgun_A_Shell_HPP

class ABP_Shotgun_A_Shell_C : public AMAG_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool Attached(class AActor* Parent);
    void OnItemSkinned(class USkinEffect* Skin);
    void ExecuteUbergraph_BP_Shotgun_A_Shell(int32 EntryPoint);
};

#endif
