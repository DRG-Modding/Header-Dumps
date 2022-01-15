#ifndef UE4SS_SDK_BP_Compressed_Gold_HPP
#define UE4SS_SDK_BP_Compressed_Gold_HPP

class ABP_Compressed_Gold_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight6;
    UPointLightComponent* PointLight5;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;

    void All_PlayDugFree();
    void Receive_OnDeposited(UPlayerCharacter* fromPlayer);
    void ExecuteUbergraph_BP_Compressed_Gold(int32 EntryPoint, UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerCharacter* K2Node_Event_fromPlayer, UGameData* CallFunc_GetFSDGameData_ReturnValue, UCommunityGoal* CallFunc_GetGoal_ReturnValue);
}

#endif
