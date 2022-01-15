#ifndef UE4SS_SDK_HUD_RadarPoint_Spawner_HPP
#define UE4SS_SDK_HUD_RadarPoint_Spawner_HPP

class UHUD_RadarPoint_Spawner_C : UUserWidget
{
    UImage* Image_0;
    AActor* Owner;
    bool MarkedForDestruction;

    void InitPoint(URadarPointComponent* RadarComponent, bool& success, RadarPointRemovedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* CallFunc_GetOwner_ReturnValue);
    void Get3dPosition(FVector& Pos, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
    void Deactivate();
}

#endif
