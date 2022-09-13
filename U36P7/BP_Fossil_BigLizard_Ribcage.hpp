#ifndef UE4SS_SDK_BP_Fossil_BigLizard_Ribcage_HPP
#define UE4SS_SDK_BP_Fossil_BigLizard_Ribcage_HPP

class ABP_Fossil_BigLizard_Ribcage_C : public ABP_FossilsBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_Fossil_BigLizard_Ribcage(int32 EntryPoint);
};

#endif
