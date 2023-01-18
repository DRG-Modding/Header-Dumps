#ifndef UE4SS_SDK_BP_Lunar_HangingFireCracker_HPP
#define UE4SS_SDK_BP_Lunar_HangingFireCracker_HPP

class ABP_Lunar_HangingFireCracker_C : public AHangingFireCracker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall9;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall8;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall7;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall6;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall4;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall3;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall2;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall1;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall5;
    bool StartedFire;

    void OnRep_StartedFire();
    void BndEvt__BP_Lunar_HangingFireCracker_Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_AddImpulse(class APlayerCharacter* User);
    void ExecuteUbergraph_BP_Lunar_HangingFireCracker(int32 EntryPoint);
};

#endif
