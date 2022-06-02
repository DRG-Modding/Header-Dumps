#ifndef UE4SS_SDK_DLSS_HPP
#define UE4SS_SDK_DLSS_HPP

#include "DLSS_enums.hpp"

class UDLSSOverrideSettings : public UObject
{
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride;
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;

};

class UDLSSSettings : public UObject
{
    bool bEnableDLSSD3D12;
    bool bEnableDLSSD3D11;
    bool bEnableDLSSVulkan;
    bool bEnableDLSSInEditorViewports;
    bool bEnableScreenpercentageManipulationInDLSSEditorViewports;
    bool bEnableDLSSInPlayInEditorViewports;
    bool bShowDLSSSDebugOnScreenMessages;
    FString GenericDLSSBinaryPath;
    bool bGenericDLSSBinaryExists;
    uint32 NVIDIANGXApplicationId;
    FString CustomDLSSBinaryPath;
    bool bCustomDLSSBinaryExists;

};

#endif
