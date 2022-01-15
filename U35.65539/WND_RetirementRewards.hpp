#ifndef UE4SS_SDK_WND_RetirementRewards_HPP
#define UE4SS_SDK_WND_RetirementRewards_HPP

class UWND_RetirementRewards_C : UWND_ClaimableRewards_C
{

    void GetData(FClaimableRewardView& OutData, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, UBP_HUD_SpaceRig_C* K2Node_DynamicCast_AsBP_HUD_Space_Rig, bool K2Node_DynamicCast_bSuccess, FClaimableRewardView K2Node_MakeStruct_ClaimableRewardView);
}

#endif
