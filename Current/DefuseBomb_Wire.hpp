#ifndef UE4SS_SDK_DefuseBomb_Wire_HPP
#define UE4SS_SDK_DefuseBomb_Wire_HPP

class UDefuseBomb_Wire_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBreak;
    float CutPosition;
    float BreakProgress;
    FInterpCurveVector2D Curve;
    FVector2D StartPos;
    FVector2D StartTangent;
    FVector2D EndPos;
    FVector2D EndTangent;
    FCurve2DAppearance AppearanceDefault;
    FCurve2DAppearance AppearanceCuttable;
    bool IsCuttable;

    void GetWireDistance(float InStartKey, float InEndKey, float& OutDist);
    void SetCuttableTint(FLinearColor Appearance Cuttable Tint);
    void DrawCurveEnd(FPaintContext& Context, const FVector2D& DrawSize, FCurve2DAppearance InAppearance, float Start, float End, bool InvertTangents);
    void SetIsCuttable(bool InCuttable);
    void SetStartAndEnd(FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent);
    void OnPaint(FPaintContext& Context);
    void PreConstruct(bool IsDesignTime);
    void BreakAt(float InCutPosition);
    void Construct();
    void ExecuteUbergraph_DefuseBomb_Wire(int32 EntryPoint);
};

#endif
