#ifndef UE4SS_SDK_HUD_Radar_WorldCorners_HPP
#define UE4SS_SDK_HUD_Radar_WorldCorners_HPP

class UHUD_Radar_WorldCorners_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text;
    FVector Position;
    FString Name;

    void UpdatePoint(float alpha, float verticalDist, bool& destroy, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor);
    void Get3dPosition(FVector& Pos);
    void InitPoint(class URadarPointComponent* RadarComponent, bool& success);
    void Construct();
    void ExecuteUbergraph_HUD_Radar_WorldCorners(int32 EntryPoint, FText CallFunc_Conv_StringToText_ReturnValue);
};

#endif
