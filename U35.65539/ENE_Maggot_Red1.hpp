#ifndef UE4SS_SDK_ENE_Maggot_Red1_HPP
#define UE4SS_SDK_ENE_Maggot_Red1_HPP

class AENE_Maggot_Red1_C : UENE_Maggot_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* Damage;

    void Died();
    void ExecuteUbergraph_ENE_Maggot_Red1(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2);
}

#endif
