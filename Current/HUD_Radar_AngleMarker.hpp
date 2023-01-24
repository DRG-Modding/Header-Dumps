#ifndef UE4SS_SDK_HUD_Radar_AngleMarker_HPP
#define UE4SS_SDK_HUD_Radar_AngleMarker_HPP

class UHUD_Radar_AngleMarker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UTextBlock* Text;
    FVector Position;
    FString Name;

    void UpdatePoint(float alpha, float verticalDist, bool& destroy);
    void Get3dPosition(FVector& Pos);
    void InitPoint(class URadarPointComponent* RadarComponent, bool& success);
    void Construct();
    void ExecuteUbergraph_HUD_Radar_AngleMarker(int32 EntryPoint);
};

#endif
