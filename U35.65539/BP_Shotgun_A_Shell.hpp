#ifndef UE4SS_SDK_BP_Shotgun_A_Shell_HPP
#define UE4SS_SDK_BP_Shotgun_A_Shell_HPP

class ABP_Shotgun_A_Shell_C : UMAG_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    bool Attached(AActor* Parent);
    void OnItemSkinned(USkinEffect* Skin);
    void ExecuteUbergraph_BP_Shotgun_A_Shell(int32 EntryPoint, USkinEffect* K2Node_Event_skin);
}

#endif
