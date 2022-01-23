#ifndef UE4SS_SDK_BP_FrozenState_HPP
#define UE4SS_SDK_BP_FrozenState_HPP

class UBP_FrozenState_C : public UFrozenStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveStateEnter();
    void ReceiveStateExit();
    void ReceiveOnDefrosting();
    void ExecuteUbergraph_BP_FrozenState(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1);
};

#endif
