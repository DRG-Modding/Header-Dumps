#ifndef UE4SS_SDK_HUD_RadarPoint_Spawner_HPP
#define UE4SS_SDK_HUD_RadarPoint_Spawner_HPP

class UHUD_RadarPoint_Spawner_C : public UUserWidget
{
    class UImage* Image_0;
    class AActor* Owner;
    bool MarkedForDestruction;

    void InitPoint(class URadarPointComponent* RadarComponent, bool& success, FInitPointK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue);
    void Get3dPosition(FVector& Pos, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void UpdatePoint(float alpha, float verticalDist, bool& destroy, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
    void Deactivate();
};

#endif
