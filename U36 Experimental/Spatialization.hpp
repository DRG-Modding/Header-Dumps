#ifndef UE4SS_SDK_Spatialization_HPP
#define UE4SS_SDK_Spatialization_HPP

class UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
    bool bEnableILD;
    FRuntimeFloatCurve PanningIntensityOverDistance;

};

#endif
