#ifndef UE4SS_SDK_HUD_EscortMuleStatus_HPP
#define UE4SS_SDK_HUD_EscortMuleStatus_HPP

class UHUD_EscortMuleStatus_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OutOfFuel;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UProgressBar* FAKEFuelGauge_Left;
    class UImage* Icon_Fuel;
    class UImage* Icon_Fuel2;
    class UImage* Icon_Speed;
    class UImage* Image_Separator;
    class UITM_EscortMuleHealthBar_C* ITM_EscortMuleHealthBar;
    class UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus1;
    class UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus2;
    class UImage* speed1;
    class UImage* speed2;
    class UImage* speed3;
    class UImage* speed4;
    class UImage* speed5;
    class UTextBlock* TextBlock_StatusHeader;
    class UTextBlock* TextBlock_VehicleName;
    class UVerticalBox* VerticalBox_Fuel;
    class UWidgetSwitcher* WidgetSwitcher_Fuel;
    class UWidgetSwitcher* WidgetSwitcher_IsAlive;
    class UEscortObjective* EscortObj;
    float PrevHealth;
    EEscortMissionState prevState;
    TArray<float> SpeedThresholds;
    FTimerHandle UpdateFuelDisplayTimer;
    FVector StartPos;
    float EndPercentage;
    int32 NumberOfTakenExtractors;

    void CalcFuelGaugePercentage();
    void PreConstruct(bool IsDesignTime);
    void SetObjective(class UObjective* obj);
    void OnObjectiveUpdated(class UObjective* Objective);
    void OnSpeedChanged(float newSpeedModifier);
    void ExtracterTaken(class AExtractorItem* Item);
    void ExecuteUbergraph_HUD_EscortMuleStatus(int32 EntryPoint);
};

#endif
