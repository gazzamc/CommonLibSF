#pragma once

#include "SFSE/Impl/PCH.h"

#include "RE/A/AIProcess.h"
#include "RE/A/Actor.h"
#include "RE/A/ActorEquipManager.h"
#include "RE/A/ActorPackage.h"
#include "RE/A/ActorState.h"
#include "RE/A/ActorValueInfo.h"
#include "RE/A/ActorValueOwner.h"
#include "RE/A/ActorValueStorage.h"
#include "RE/A/ActorValues.h"
#include "RE/A/Array.h"
#include "RE/B/BGSAnimationGraphComponent.h"
#include "RE/B/BGSAttachParentArray.h"
#include "RE/B/BGSAttackDataForm.h"
#include "RE/B/BGSBipedObjectForm.h"
#include "RE/B/BGSBodyPartInfo.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEditorID.h"
#include "RE/B/BGSEntryPoint.h"
#include "RE/B/BGSEquipSlot.h"
#include "RE/B/BGSForcedLocRefType.h"
#include "RE/B/BGSInventoryInterface.h"
#include "RE/B/BGSInventoryItem.h"
#include "RE/B/BGSInventoryList.h"
#include "RE/B/BGSKeyword.h"
#include "RE/B/BGSKeywordForm.h"
#include "RE/B/BGSListForm.h"
#include "RE/B/BGSLocalizedString.h"
#include "RE/B/BGSLocalizedStringDL.h"
#include "RE/B/BGSLocation.h"
#include "RE/B/BGSLocationRefType.h"
#include "RE/B/BGSMod.h"
#include "RE/B/BGSNativeTerminalForm.h"
#include "RE/B/BGSObjectInstance.h"
#include "RE/B/BGSObjectPlacementDefaults.h"
#include "RE/B/BGSOverridePackCollection.h"
#include "RE/B/BGSPerk.h"
#include "RE/B/BGSPerkRankArray.h"
#include "RE/B/BGSPreloadable.h"
#include "RE/B/BGSPreviewTransform.h"
#include "RE/B/BGSPropertySheet.h"
#include "RE/B/BGSScene.h"
#include "RE/B/BGSSkinForm.h"
#include "RE/B/BGSSnapTemplateComponent.h"
#include "RE/B/BGSTerminal.h"
#include "RE/B/BGSTextureModel.h"
#include "RE/B/BGSTypedKeywordValueArray.h"
#include "RE/B/BSContainer.h"
#include "RE/B/BSExtraData.h"
#include "RE/B/BSFixedString.h"
#include "RE/B/BSInputEventReceiver.h"
#include "RE/B/BSInputEventUser.h"
#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSLock.h"
#include "RE/B/BSReflection.h"
#include "RE/B/BSStringPool.h"
#include "RE/B/BSStringT.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTEvent.h"
#include "RE/B/BSTList.h"
#include "RE/B/BSTSingleton.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/C/Color.h"
#include "RE/C/CombatGroup.h"
#include "RE/C/Console.h"
#include "RE/C/ConsoleLog.h"
#include "RE/E/ExtraDataList.h"
#include "RE/E/ExtraDataTypes.h"
#include "RE/F/FORM_ENUM_STRING.h"
#include "RE/F/FactionRank.h"
#include "RE/F/FormTypes.h"
#include "RE/G/GameMenuBase.h"
#include "RE/H/HandlePolicy.h"
#include "RE/I/IAnimationGraphManagerHolder.h"
#include "RE/I/IComplexType.h"
#include "RE/I/IFunction.h"
#include "RE/I/IKeywordFormBase.h"
#include "RE/I/IMenu.h"
#include "RE/I/IMovementInterface.h"
#include "RE/I/IMovementPlayerControlsFilter.h"
#include "RE/I/IMovementState.h"
#include "RE/I/IMovementStateStore.h"
#include "RE/I/INIPrefSettingCollection.h"
#include "RE/I/INISettingCollection.h"
#include "RE/I/IObjectHandlePolicy.h"
#include "RE/I/IPostAnimationChannelUpdateFunctor.h"
#include "RE/I/IStoreAnimationActions.h"
#include "RE/I/IVMObjectBindInterface.h"
#include "RE/IDs.h"
#include "RE/IDs_NiRTTI.h"
#include "RE/IDs_RTTI.h"
#include "RE/IDs_VTABLE.h"
#include "RE/M/MagicTarget.h"
#include "RE/M/MemoryManager.h"
#include "RE/M/MenuOpenCloseEvent.h"
#include "RE/M/Misc.h"
#include "RE/N/NativeFunction.h"
#include "RE/N/NativeFunctionBase.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiSmartPointer.h"
#include "RE/O/Object.h"
#include "RE/O/ObjectBindPolicy.h"
#include "RE/O/ObjectTypeInfo.h"
#include "RE/P/PerkRankData.h"
#include "RE/P/PlayerCamera.h"
#include "RE/P/PlayerCharacter.h"
#include "RE/P/PropertyGroupInfo.h"
#include "RE/P/PropertyTypeInfo.h"
#include "RE/R/RegSettingCollection.h"
#include "RE/RTTI.h"
#include "RE/S/SWFToCodeFunctionHandler.h"
#include "RE/S/ScaleformGFxASMovieRootBase.h"
#include "RE/S/ScaleformGFxFileTypeConstants.h"
#include "RE/S/ScaleformGFxFunctionHandler.h"
#include "RE/S/ScaleformGFxMovie.h"
#include "RE/S/ScaleformGFxState.h"
#include "RE/S/ScaleformGFxStateBag.h"
#include "RE/S/ScaleformGFxValue.h"
#include "RE/S/ScaleformPtr.h"
#include "RE/S/ScaleformRefCount.h"
#include "RE/S/Script.h"
#include "RE/S/Setting.h"
#include "RE/S/SettingCollection.h"
#include "RE/S/SettingCollectionList.h"
#include "RE/S/SettingCollectionMap.h"
#include "RE/S/Sexes.h"
#include "RE/S/Struct.h"
#include "RE/S/StructTypeInfo.h"
#include "RE/T/TBO_InstanceData.h"
#include "RE/T/TESAIForm.h"
#include "RE/T/TESActorBase.h"
#include "RE/T/TESActorBaseData.h"
#include "RE/T/TESBoundAnimObject.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESCamera.h"
#include "RE/T/TESCellFullyLoadedEvent.h"
#include "RE/T/TESContainer.h"
#include "RE/T/TESContainerChangedEvent.h"
#include "RE/T/TESDataHandler.h"
#include "RE/T/TESDeathEvent.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESFile.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFormRefCount.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESHandleForm.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESNPC.h"
#include "RE/T/TESObject.h"
#include "RE/T/TESObjectARMO.h"
#include "RE/T/TESObjectCELL.h"
#include "RE/T/TESObjectLoadedEvent.h"
#include "RE/T/TESObjectREFR.h"
#include "RE/T/TESQuest.h"
#include "RE/T/TESRace.h"
#include "RE/T/TESRaceForm.h"
#include "RE/T/TESResponse.h"
#include "RE/T/TESSpellList.h"
#include "RE/T/TESTexture.h"
#include "RE/T/TESTopicInfo.h"
#include "RE/T/TESWorldSpace.h"
#include "RE/T/TypeInfo.h"
#include "RE/U/UI.h"
#include "RE/V/Variable.h"
