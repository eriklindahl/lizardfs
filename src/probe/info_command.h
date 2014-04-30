#pragma once

#include "config.h"

#include "probe/lizardfs_probe_command.h"

class InfoCommand : public LizardFsProbeCommand {
public:
	virtual std::string name() const;
	virtual SupportedOptions supportedOptions() const;
	virtual void usage() const;
	virtual void run(const Options& options) const;
};
