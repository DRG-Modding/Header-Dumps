#ifndef UE4SS_SDK_ENE_Spider_Swarmer_Radioactive_HPP
#define UE4SS_SDK_ENE_Spider_Swarmer_Radioactive_HPP

class AENE_Spider_Swarmer_Radioactive_C : UENE_Spider_Swarmer_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UParticleSystemComponent* ParticleSystem;
    float Timeline_0_NewTrack_0_74EBECE940422CB700C18C8C76913A5B;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_74EBECE940422CB700C18C8C76913A5B;
    UTimelineComponent* Timeline_0;
    float RadiationDistance;
    float RadiationCheckDelay;
    bool IsRadioactive;
    bool AnyPlayerInRange;
    float RadioactiveLightIntensity;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnDeathBase();
    void RadiationLoop();
    void ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UPlayerCharacter* CallFunc_GetNearestPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
