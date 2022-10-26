#ifndef UE4SS_SDK_BP_FallingState_HPP
#define UE4SS_SDK_BP_FallingState_HPP

class UBP_FallingState_C : public UFallingStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USoundBase* JumpBootsActivated_Cue;
    class UParticleSystem* JumpBootsActivated_Particles;
    class USoundBase* ImpactCompensation_Impact_Cue;
    class UParticleSystem* Impactcompensation_Impact_Particles;
    class USoundBase* ImpactCompensation_Activate_Cue;
    class USoundBase* ImpactCompensationDeactivateCue;
    bool IC_WasActivated;
    float HoverBootsBreakingSpeed;
    class UParticleSystem* JumpBootsActivated_Particles_FirstPerson;

    void ShowJumpBootsActivation();
    void ReceiveHoverBootsTick(float DeltaSeconds);
    void ReceiveHoverBootsActiveChanged(bool IsActive);
    void ExecuteUbergraph_BP_FallingState(int32 EntryPoint);
};

#endif
